#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

import yaml
import sys
import json
import os
import re

usage = """
Problem data json file generator from rime for WPCS2

usage:
$ ./jsoner.py [config yaml file]

Note that you need to run `rime test` before executing this script
"""


STATEMENT_FILENAME = 'statement.md'
CONSTRANITS_FILENAME = 'constraints.h'
SAMPLE_INPUT_FILENAME = 'sample.in'
SAMPLE_OUTPUT_FILENAME = 'sample.diff'


def exit_with_usage(error = None) :
    print(usage)
    if error is not None :
        print('\nError: ' + error)
    exit(-1)


def open_and_read_file(file_name) :
    if not os.path.isfile(file_name) :
        exit_with_usage("file " + file_name + " dose not exist!")
    with open(file_name, "r", encoding="utf-8") as f:
        return f.read()


def sanitize_title(title) :
    pattern = r"^[a-zA-Z]:? ?"
    matched = re.match(pattern, title)

    if matched :
        return title[matched.end():]
    else :
        return title


def build_define_dict(header_content) :
    pattern = r'#define\s+([a-zA-Z-_]*)\s+(\d+)'
    matches = re.findall(pattern, header_content)
    return dict([(k, int(v)) for (k,v) in matches])


def smart_str(num):
    # Generate prettified string for integer in statement.
    # e.g. 1000000 -> 10^6, 500000 -> 5 \times 10^5, 10000000000 -> 10^{10}
    if num < 100000:
        return str(num)
    match = re.match(r'([^0]+)(0*)', str(num))
    if len(match.group(1)) == 1:
        base = '10' if match.group(1) == '1' else '{} \times 10'.format(match.group(1))
        powers = len(match.group(2))
        exp = powers if powers < 10 else '{{{}}}'.format(powers)
        return '{}^{}'.format(base, exp)
    return '{:,}'.format(num)


def build_statement(dir_name) :
    statement = open_and_read_file(os.path.join(dir_name, STATEMENT_FILENAME))

    # Replace {{ DEFINIE }} from constraints.h
    constraints_h = open_and_read_file(os.path.join(dir_name, 'tests', CONSTRANITS_FILENAME))
    const_dict = build_define_dict(constraints_h)

    # TODO skip if constraints.h doesn't exist.
    replace_pattern = re.compile(r'\{\{\s*([a-zA-Z_-]*)\s*\}\}')
    lastIndex = 0
    while True:
        match = replace_pattern.search(statement, lastIndex)
        if not match:
            break
        def_str = match.group(1)
        if def_str.lower() == 'sample':
            lastIndex = match.end()
            continue
        if def_str not in const_dict:
            print("Define {} didn't find in {}.".format(def_str, dir_name))
            exit(-1)
        result_str = smart_str(const_dict[def_str])
        statement = statement[:match.start()] + result_str + statement[match.end():]
        lastIndex = match.start() + len(result_str)

    # Replace {{ sample }} from sample input/outoput.
    match = re.search(r'\{\{\s*sample*\s*\}\}', statement, flags=re.IGNORECASE)
    if match:
        input_str = open_and_read_file(os.path.join(dir_name, 'rime-out', 'tests', SAMPLE_INPUT_FILENAME))
        output_str = open_and_read_file(os.path.join(dir_name, 'rime-out', 'tests', SAMPLE_OUTPUT_FILENAME))
        sample_str = '''# Sample Input
```
{}```

# Sample Output
```
{}```'''.format(input_str, output_str)
        statement = statement[:match.start()] + sample_str + statement[match.end():]

    return statement


if __name__ == '__main__' :
    argvs = sys.argv

    if len(argvs) != 2 :
        exit_with_usage()

    infile_name = argvs[1]
    data = yaml.load(open_and_read_file(infile_name))

    for problem in data['problems'] :
        dir_name = problem['dir_name']

        # check rime-out exists
        if not os.path.isdir(os.path.join(dir_name, 'rime-out')) :
            exit_with_usage(dir_name + "/rime-out directory does not exits ")

        # read problem title
        def _problem(title=None, **ignore) :
            problem['title'] = sanitize_title(title)
        def _atcoder_config(**ignore) :
            return
        exports = {'problem': _problem, 'atcoder_config': _atcoder_config}
        exec(open_and_read_file(os.path.join(dir_name, 'PROBLEM')), exports, {})

        # statement
        problem['statement'] = build_statement(dir_name)

        # dataset
        for data_set in problem['data_sets'] :
            test_dir =  os.path.join(dir_name, 'rime-out', 'tests', data_set['label'].lower())
            data_set['input'] = open_and_read_file(test_dir + '.in')
            data_set['output'] = open_and_read_file(test_dir + '.diff')

        del problem['dir_name']

        # output to std
        data_set_str = ["{} ({})".format(s['label'], s['score']) for s in problem['data_sets']]
        print(problem['title'] + " : " + ", ".join(data_set_str))

    outfile_name = re.sub(r'.ya?ml', '.json', infile_name)

    with open(outfile_name, "w", encoding="utf-8") as f :
        json.dump(data, f, ensure_ascii=False, sort_keys=True)

    print("\nSuccessfully output to " + outfile_name)
