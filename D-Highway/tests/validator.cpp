#include "testlib.h"
#include "constraints.h"
using namespace std;

void check_case(const int& max_n){
    int n = inf.readInt(0, max_n, "N");
    inf.readEoln();
    for(int i=0; i<n; i++){
        if(i != 0) {
            inf.readSpace();
        }
        inf.readInt(0, 2, "X_i");
    }
    inf.readEoln();
}

int main(){
    registerValidation();

    int cases = inf.readInt(1, LARGE_T, "cases");
    inf.readEoln();

    for(int i=0; i<cases; ++i){
        check_case(cases==SMALL_T ? SMALL_MAX_N : LARGE_MAX_N);
    }

    inf.readEof();
    return 0;
}