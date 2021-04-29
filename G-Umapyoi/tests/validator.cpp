#include "testlib.h"
#include "constraints.h"
using namespace std;

void check_case(){
  int a = inf.readInt(0, MAX_ABCDE, "a");
  inf.readSpace();
  int b = inf.readInt(0, MAX_ABCDE, "b");
  inf.readSpace();
  int c = inf.readInt(0, MAX_ABCDE, "c");
  inf.readSpace();
  int d = inf.readInt(0, MAX_ABCDE, "d");
  inf.readSpace();
  int e = inf.readInt(0, MAX_ABCDE, "e");
  inf.readEoln();
}

int main(){
  registerValidation();

  int T = inf.readInt(1, MAX_T, "T");
  inf.readEoln();

  for (int i = 0; i < T; i++){
      check_case();
  }

  inf.readEof();
  return 0;
}
