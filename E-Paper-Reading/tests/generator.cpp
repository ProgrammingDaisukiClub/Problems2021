#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"
using namespace std;

void random(string fname, int cases, int minn, int maxn, int mint, int maxt);

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  random("small.in", MIN_CASES, MIN_N, MAX_N_SMALL, MIN_T, MAX_T);
  random("large.in", MAX_CASES, MIN_N, MAX_N_LARGE, MIN_T, MAX_T);
  for (int i = 0; i < 10; ++i)
    random("random-test" + to_string(i) + ".in", MAX_CASES, MIN_N, MAX_N_LARGE,
           MIN_T, MAX_T);
  return 0;
}

void random(string fname, int cases, int minn, int maxn, int mint, int maxt) {
  ofstream of(fname);
  of << cases << endl;
  while (cases--) {
    int n = rnd.next(max(minn, maxn / 2), maxn);
    of << n << endl;
    for (int i = 0; i < n; ++i) {
      if (i != 0) of << " ";
      of << rnd.next(mint, maxt);
    }
    of << endl;
  }
  of.close();
}