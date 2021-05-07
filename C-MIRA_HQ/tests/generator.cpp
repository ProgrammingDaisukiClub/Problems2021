#include <fstream>
#include <string>
#include <algorithm>
#include "testlib.h"
#include "constraints.h"
using namespace std;

void generate(const string& file_name, int T, int min_N, int max_N, int min_L, int max_L) {
    ofstream of(file_name);

    of << T << endl;
    for(int t = 0; t < T; t++) {
        int N = rnd.next(min_N, max_N);
        of << N << endl;
        int sum = 0;
        for(int i = 0; i < N; i++) {
            int L = rnd.next(max(-sum, min_L), max_L);
            of << L;
            if(i < N - 1) of << " ";
        }
        of << endl;
    }
}

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    generate("small.in", SMALL_T, SMALL_MIN_N, SMALL_MAX_N, SMALL_MIN_L, SMALL_MAX_L);
    generate("large.in", LARGE_T, LARGE_MIN_N, LARGE_MAX_N, LARGE_MIN_L, LARGE_MAX_L);
    
    for(int i = 0; i < 10; i++) {
        generate("random_test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N, LARGE_MAX_N, LARGE_MIN_L, LARGE_MAX_N);
    }

    return 0;
} 


