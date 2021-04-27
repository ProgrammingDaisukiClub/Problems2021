#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate(const string &file_name, int num_cases, int max_sequence_len) {
  ofstream ofs(file_name);
  ofs << num_cases <<endl;

  for (int i = 0; i < num_cases; i++) {
    const int sequence_len = rnd.next(1, max_sequence_len);
    ofs << sequence_len << endl;

    for (int j = 0; j < sequence_len - 1; j++) {
      ofs << rnd.next(0, 2) << " ";
    }
    ofs << rnd.next(0, 2) << endl;
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", SMALL_T, SMALL_MAX_N);
  generate("large.in", LARGE_T, LARGE_MAX_N);
  for (int i=0; i<10; i++) {
    generate("random_test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N);
  }

  return 0;
}
