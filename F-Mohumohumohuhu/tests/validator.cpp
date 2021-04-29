#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void check() {
  int N = inf.readInt(MIN_N, MAX_N, "N");
  ensuref(N % 2 == 0, "N must be even");
  inf.readEoln();
  string s = inf.readString(format("[mohu]{%d}", N), "s");
  int half = N / 2;
  for (int i = 0; i < half; i += 2)
    ensuref(
        (s[i] == 'm' && s[i + 1] == 'o') || (s[i] == 'h' && s[i + 1] == 'u'),
        "mo or hu");
}

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(1, MAX_T, "T");
  ensuref((T == MIN_T || T == MAX_T || T == SAMPLE_T), "T");
  inf.readEoln();
  for (int i = 0; i < T; ++i) {
    check();
  }
  inf.readEof();
  return 0;
}