#include <fstream>
#include <random>
#include <string>
#include <vector>
#include <cassert>

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
void gen_cases(string fname, int cases, int minn, int maxn, int minq, int maxq);
void random(ofstream &of, int minn, int maxn, int minq, int maxq);
void maze(ofstream &of, int minn, int maxn, int minq, int maxq);

int main(int argc, char *argv[]) {
  registerGen(argc, argv, 1);
  gen_cases("small.in", SMALL_T, SMALL_MIN_N, SMALL_MAX_N, SMALL_MIN_Q,
            SMALL_MAX_Q);
  gen_cases("large.in", LARGE_T, LARGE_MAX_N, LARGE_MAX_N, LARGE_MAX_Q,
            LARGE_MAX_Q);
  for (int i = 0; i < 10; ++i)
    gen_cases("random-test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N,
              LARGE_MAX_N, LARGE_MAX_Q, LARGE_MAX_Q);
  return 0;
}

void gen_cases(string fname, int cases, int minn, int maxn, int minq,
               int maxq) {
  ofstream of(fname);
  of << cases << endl;
  if (fname == "small.in") {
    while (cases--) {
      if (rnd.next(0, 1))
        random(of, minn, maxn, minq, maxq);
      else
        maze(of, minn, maxn, minq, maxq);
    }
  } else {
    if (fname == "large.in")
      maze(of, minn, maxn, minq, maxq), cases--;
    else
      random(of, minn, maxn, minq, maxq), cases--;
    for (int i = 0; i < 2; ++i) random(of, minn, maxn, minq, maxq), cases--;
    while (cases--) {
      if (rnd.next(0, 1))
        random(of, LARGE_MED_N / 2, LARGE_MED_N, minq, maxq);
      else
        maze(of, LARGE_MED_N / 2, LARGE_MED_N, minq, maxq);
    }
  }
  of.close();
}

void random(ofstream &of, int minn, int maxn, int minq, int maxq) {
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

void maze(ofstream &of, int minn, int maxn, int minq, int maxq) {
  const vector<int> dx = {1, 0, -1, 0};
  const vector<int> dy = {0, 1, 0, -1};
  int N = rnd.next(minn, maxn);
  while (N % 2 == 0) N = rnd.next(minn, maxn);
  of << N << endl;

  vector<string> G(N, string(N, '.'));

  auto get_digpos = [&]() -> vector<pair<int, int>> {
    vector<pair<int, int>> res;

    for (int x = 0; x < N; x++)
      for (int y = 0; y < N; y++) {
        if (x % 2 == 0 or y % 2 == 0) continue;
        if (G[x][y] == '#') continue;
        bool ok = false;
        for (int dir = 0; dir < 4; dir++) {
          int nx = x + dx[dir] * 2, ny = y + dy[dir] * 2;
          if (!isvalid(nx, ny, N)) continue;
          if (G[nx][ny] == '#') continue;
          ok = true;
          break;
        }
        if (ok) res.emplace_back(x, y);
      }

    return res;
  };

  while (1) {
    auto kouho = get_digpos();
    if (kouho.empty()) break;

    auto [x, y] = kouho[rnd.next(0, int(kouho.size()) - 1)];
    while (1) {
      vector<pair<int, int>> nxt;
      for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir] * 2, ny = y + dy[dir] * 2;
        if (!isvalid(nx, ny, N)) continue;
        if (G[nx][ny] == '#') continue;
        nxt.emplace_back(nx, ny);
      }
      if (nxt.empty()) break;

      auto [nx, ny] = nxt[rnd.next(0, (int)nxt.size() - 1)];
      for (int X = min(x, nx); X <= max(x, nx); X++) {
        for (int Y = min(y, ny); Y <= max(y, ny); Y++) {
          G[X][Y] = '#';
        }
      }
      x = nx, y = ny;
    }
  }

  for (int i = 0; i < N; i++) {
    of << G[i] << endl;
  }

  int Q, sz;
  vector<pair<int, int>> kouho;
  {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++)
        if (G[i][j] == '.') kouho.emplace_back(i, j);
    }
    sz = int(kouho.size());
    Q = rnd.next(min(minq, sz), min(maxq, sz));
  }

  set<int> se;
  while (se.size() < Q) se.emplace(rnd.next(0, sz - 1));

  of << Q << endl;
  for (int i : se)
    of << kouho[i].first + 1 << " " << kouho[i].second + 1 << endl;
}