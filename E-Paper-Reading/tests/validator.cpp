#include "constraints.h"
#include "testlib.h"
#include <fstream>
#include <string>

using namespace std;

void check() {
  int N = inf.readInt(MIN_N, MAX_N_LARGE, "D");
  inf.readEoln();
  for (int i = 0; i < N; ++i) {
    if (i != 0) inf.readSpace();
    inf.readInt(MIN_A, MAX_A, "T_i");
  }
  inf.readEoln();
}

signed main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(1, MAX_CASES, "T");
  inf.readEoln();
  for (int i = 0; i < T; i++) {
    check();
  }
  inf.readEof();
  return 0;
}