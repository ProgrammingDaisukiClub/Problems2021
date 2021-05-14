#include <stdio.h>

int times, n;
int t[500] = {};

int main() {
  scanf("%d", &times);
  while (times--) {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &t[i]);
    int res = 0;
    for (int k = 0; k < 2; ++k) {
      int id = 0;
      for (int i = 1; i < n; ++i)
        if (t[id] > t[i]) id = i;
      res += t[id];
      t[id] = 1e9;
    }
    printf("%d\n", res);
  }
  return 0;
}