#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void check() {
  int A = inf.readInt(MIN_AB, MAX_AB);
  inf.readSpace();
  int B = inf.readInt(MIN_AB, MAX_AB);
  inf.readEoln();
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