#include "constraints.h"
#include "testlib.h"
#include <fstream>
#include <string>
using namespace std;

void check(){
    int N = inf.readInt(LARGE_MIN_N, LARGE_MAX_N, "N");
    inf.readEoln();
    int ans=0;
    for (int i = 0; i < N; ++i) {
    if (i != 0) inf.readSpace();
    int add=inf.readInt(LARGE_MIN_L, LARGE_MAX_L, "L_i");
    ans+=add;
    ensure(ans>=0);
  }
  inf.readEoln();
}

signed main(int argc, char *argv[]) {
    registerValidation(argc,argv);
    int T = inf.readInt(1, LARGE_T, "T");
    inf.readEoln();
    for (int i = 0; i < T; i++) {
        check();
    }
    inf.readEof();
    return 0;
}