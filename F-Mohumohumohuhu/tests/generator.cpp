#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate(const string &file_name, int num_case, int max_size) {
  ofstream ofs(file_name);
  ofs << num_case << endl;

  for (int i=0; i<num_case; i++) {
  	bool ans = rnd.next(0,1);
  	int N = rnd.next(2, max_size) / 2 * 2;
  	
  	if(ans){
  		N = N / 4 * 4;
  		ofs << N << endl;
  		for(int j = 0; j < N / 4; ++j){
  			ofs << "mohu";
  		}
  	}else{
  		ofs << N << endl;
  		for(int j = 0; j < N / 2; ++j){
  			ofs << (rnd.next(0,1)?"mo":"hu");
  		}
  	}
  	ofs << endl;
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", 10, 40);
  generate("large.in", MAX_T, MAX_N);
  for (int i=0; i<10; i++) {
    generate("random_test" + to_string(i) + ".in", MAX_T, MAX_N);
  }

  return 0;
}