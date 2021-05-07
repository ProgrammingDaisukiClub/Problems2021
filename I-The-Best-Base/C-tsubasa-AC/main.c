#include <stdio.h>
#define inf (int)(1e8)

int n, q;
char s[1001][1001];
int dist[10][1001][1001] = {}, x[10] = {}, y[10] = {}, d[4] = {0, 1, 0, -1},
    qx[1000001] = {}, qy[1000001] = {};

int isvalid(int nx, int ny) {
  return nx >= 0 && nx < n && ny >= 0 && ny < n && s[nx][ny] == '.';
}
int solve();

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%s", s[i]);
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
      scanf("%d %d", &x[i], &y[i]);
      --x[i], --y[i];
    }
    printf("%d\n", solve());
  }
  return 0;
}

int solve() {
  for (int i = 0; i < q; ++i) {
    for (int j = 0; j < n; ++j)
      for (int k = 0; k < n; ++k) dist[i][j][k] = inf;
    dist[i][x[i]][y[i]] = 0;
    qx[0] = x[i], qy[0] = y[i];
    int qlen = 1;
    for (int id = 0; id < qlen; ++id) {
      int nx = qx[id], ny = qy[id], ndist = dist[i][nx][ny];
      for (int p = 0; p < 4; ++p) {
        int tx = nx + d[p], ty = ny + d[1 ^ p];
        if (!isvalid(tx, ty) || dist[i][tx][ty] <= ndist + 1) continue;
        dist[i][tx][ty] = ndist + 1;
        qx[qlen] = tx;
        qy[qlen++] = ty;
      }
    }
  }
  int res = inf;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      if (s[i][j] == '.') {
        int sum = 0;
        for (int k = 0; k < q; ++k) sum += dist[k][i][j];
        if (res > sum) res = sum;
      }
  return res;
}