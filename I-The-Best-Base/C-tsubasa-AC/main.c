#include <stdio.h>

int n, q, qulen = 0;
char s[100][100];
int dist[10][100][100] = {}, x[10] = {}, y[10] = {}, d[4] = {0, 1, 0, -1};

int solve();

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%s", s[i]);
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) scanf("%d %d", &x[i], y[i]);
    printf("%d\n", solve());
  }
  return 0;
}

int solve() { return 0; }