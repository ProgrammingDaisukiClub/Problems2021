#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate(const string& file_name, int num_case, int max_num) {
  ofstream ofs(file_name);
  ofs << num_case << endl;
  for (int i = 0; i < num_case; i++) {
    int A, B, C, D, E;
    const int generation_type = rnd.next(0, 1);
    switch (generation_type) {
      case 0:
        A = rnd.next(0, max_num);
        B = min(rnd.next(0, max_num), rnd.next(0, max_num));
        C = min(rnd.next(0, max_num), rnd.next(0, max_num));
        D = min(rnd.next(0, max_num), rnd.next(0, max_num));
        E = rnd.next(0, max_num);
        if (rnd.next(0, 2) > 0) A = (B + C + D) % max_num;
        if (rnd.next(0, 2) > 0) E = (C + D) % max_num;
        break;

      case 1:
        A = rnd.next(0, max_num);
        E = rnd.next(0, max_num);
        if (A < E) swap(A, E);
        B = A - E;
        C = rnd.next(0, E);
        D = E - C;
        const int n_random_add_loops = rnd.next(0, 2);
        for (int iter_randadd = 0; iter_randadd < n_random_add_loops;
             iter_randadd++) {
          int r = rnd.next(-9, 9);
          int b = rnd.next(0, 2);
          for (int j = 0; j < b; j++) r *= 10;
          if (rnd.next(0, 3) == 0) A += r;
          if (rnd.next(0, 3) == 0) B += r;
          if (rnd.next(0, 3) == 0) C += r;
          if (rnd.next(0, 3) == 0) D += r;
          if (rnd.next(0, 3) == 0) E += r;
        }
        break;
    }
    auto safe_mod = [](const int a, const int m) { return (a % m + m) % m; };
    ofs << safe_mod(A, max_num + 1) << " ";
    ofs << safe_mod(B, max_num + 1) << " ";
    ofs << safe_mod(C, max_num + 1) << " ";
    ofs << safe_mod(D, max_num + 1) << " ";
    ofs << safe_mod(E, max_num + 1) << endl;
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", MIN_T, 500);
  generate("large.in", MAX_T, MAX_ABCDE);
  for (int i = 0; i < 10; i++) {
    generate("random_test" + to_string(i) + ".in", MAX_T, MAX_ABCDE);
  }

  return 0;
}