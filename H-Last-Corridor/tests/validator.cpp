#include <iostream>
#include "testlib.h"
#include "constraints.h"
using namespace std;

void validate() {
    int N = inf.readInt(MIN_N, MAX_N, "N");
    inf.readSpace();
    int H = inf.readInt(MIN_H, MAX_H, "H");
    inf.readSpace();
    int X = inf.readInt(MIN_X, MAX_X, "X");
    inf.readEoln();

    for(int i = 0; i < N; i++) {
        if(i != 0) inf.readSpace();
        inf.readInt(MIN_A, MAX_A, "A_i");
    }
    inf.readEoln();

    for(int i = 0; i < X; i++) {
        if(i != 0) inf.readSpace();
        inf.readInt(MIN_D, MAX_D, "D_i");
    }
    inf.readEoln();
}

int main(int argc, char** argv) {
    registerValidation(argc, argv);

    int T = inf.readInt(MIN_T, MAX_T, "T");
    inf.readEoln();

    while(T--) validate();

    inf.readEof();
    return 0;
}