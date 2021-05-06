#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"
using namespace std;

struct Unionfind {
  // tree number
  vector<int> par;
  // constructor
  Unionfind(int n = 1) : par(n, -1) {}
  // search root
  int root(int x) {
    if (par[x] < 0) return x;
    return par[x] = root(par[x]);
  }
  // is same?
  bool issame(int x, int y) { return root(x) == root(y); }

  // add
  // already added, return 0
  bool uni(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return 0;
    if (par[x] > par[y]) swap(x, y);
    par[x] += par[y];
    par[y] = x;
    return 1;
  }
  int size(int x) { return -par[root(x)]; }
};

using P = pair<int, int>;

bool isvalid(int x, int y, int n) { return x >= 0 && x < n && y >= 0 && y < n; }
void random(string fname, int cases, int minn, int maxn, int minq, int maxq);

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  random("small.in", SMALL_T, SMALL_MIN_N, SMALL_MAX_N, SMALL_MIN_Q,
         SMALL_MAX_Q);
  random("large.in", LARGE_T, LARGE_MAX_N, LARGE_MAX_N, LARGE_MAX_Q,
         LARGE_MAX_Q);
  for (int i = 0; i < 10; ++i)
    random("random-test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N,
           LARGE_MAX_N, LARGE_MAX_Q, LARGE_MAX_Q);
  return 0;
}

void random(string fname, int cases, int minn, int maxn, int minq, int maxq) {
  ofstream of(fname);
  of << cases << endl;
  while (cases--) {
    int n = rnd.next(max(minn, maxn / 2), maxn);
    of << n << endl;
    vector<string> s(n, string(n, '#'));
    int d[4] = {0, 1, 0, -1};
    vector<P> v;
    int q = rnd.next(min(n * n, minq), min(n * n, maxq));
    Unionfind uf(n * n);
    while (v.size() < q) {
      int x = rnd.next(0, n - 1), y = rnd.next(0, n - 1);
      if (s[x][y] == '.') continue;
      s[x][y] = '.';
      v.emplace_back(x, y);
      for (int i = 0; i < 4; ++i) {
        int tx = x + d[i], ty = y + d[1 ^ i];
        if (!isvalid(tx, ty, n) || s[tx][ty] == '#') continue;
        uf.uni(x * n + y, tx * n + ty);
      }
    }
    while (1) {
      auto p = v[rnd.next(0, (int)v.size() - 1)];
      int x = p.first, y = p.second;
      if (uf.size(x * n + y) == v.size()) break;
      int dir = rnd.next(0, 3), len = rnd.next(1, max(1, n / 3));
      for (int i = 0; i < len; ++i) {
        x += d[dir], y += d[1 ^ dir];
        if (!isvalid(x, y, n)) continue;
        if (s[x][y] == '#') {
          s[x][y] = '.';
          v.emplace_back(x, y);
        }
        for (int j = 0; j < 4; ++j) {
          int tx = x + d[j], ty = y + d[1 ^ j];
          if (!isvalid(tx, ty, n) || s[tx][ty] == '#') continue;
          uf.uni(x * n + y, tx * n + ty);
        }
      }
    }
    int m = rnd.next((int)v.size(), n * n);
    while (v.size() < m) {
      auto p = v[rnd.next(0, (int)v.size() - 1)];
      int x = p.first, y = p.second;
      int dir = rnd.next(0, 3);
      x += d[dir], y += d[1 ^ dir];
      if (!isvalid(x, y, n) || s[x][y] == '.') continue;
      s[x][y] = '.';
      v.emplace_back(x, y);
    }
    for (int i = 0; i < n; ++i) of << s[i] << endl;
    of << q << endl;
    set<int> st;
    while (st.size() < q) st.insert(rnd.next(0, m - 1));
    for (auto p : st) of << v[p].first + 1 << " " << v[p].second + 1 << endl;
  }
  of.close();
}