#include <fstream>
#include <string>
#include <utility>
#include <vector>
#include <queue>

#include "constraints.h"
#include "testlib.h"

using namespace std;
using Grid = vector<vector<bool>>;
using Pos = pair<int,int>;

const int dh[4] = {-1,0,1,0};
const int dw[4] = {0,-1,0,1};

Pos get_some_dot_position(const Grid& isRoad) {
  const int N = isRoad.size();
  for (int h=0; h<N; h++) {
    for (int w=0; w<N; w++) {
      if (isRoad[h][w]) {
        return make_pair(h, w);
      }
    }
  }
  return make_pair(-1, -1);
}

bool isInnerGrid(const Pos& pos, const int N) {
  return 0<=pos.first && pos.first<N && 0<=pos.second && pos.second<N;
}

bool isRoadConnected(const Grid& isRoad, const Pos& initPos) {
  const int N = isRoad.size();
  Grid went(N, vector<bool>(N, false));
  queue<Pos> que;
  went[initPos.first][initPos.second] = true;
  que.push(initPos);
  
  while (!que.empty()) {
    Pos now = que.front(); que.pop();
    for (int dir=0; dir<4; dir++) {
      const int nh = now.first+dh[dir];
      const int nw = now.second+dw[dir];
      if (!isInnerGrid(make_pair(nh, nw), N)) continue;
      if (!isRoad[nh][nw]) continue;
      if (went[nh][nw]) continue;
      went[nh][nw] = true;
      que.push(make_pair(nh, nw));
    }
  }
  
  for (int h=0; h<N; h++) {
    for (int w=0; w<N; w++) {
      if (isRoad[h][w] && !went[h][w]) {
        return false;
      }
    }
  }
  return true;
}

void check(bool isSmallTestSet) {
  const int MIN_N = isSmallTestSet ? SMALL_MIN_N : LARGE_MIN_N;
  const int MAX_N = isSmallTestSet ? SMALL_MAX_N : LARGE_MAX_N;
  const int MIN_Q = isSmallTestSet ? SMALL_MIN_Q : LARGE_MIN_Q;
  const int MAX_Q = isSmallTestSet ? SMALL_MAX_Q : LARGE_MAX_Q;
  
  const int N = inf.readInt(MIN_N, MAX_N, "N");
  inf.readEoln();
  
  Grid isRoad(N);
  for (int i=0; i<N; i++) {
    const string A_i = inf.readString(
      format("[\.#]{%d}", N),
      format("A[%d]", i)
    );
    for (int j=0; j<N; j++) {
      isRoad[i].push_back(A_i[j]=='.');
    }
  }
  
  const Pos dotPos = get_some_dot_position(isRoad);
  inf.ensuref(0<=dotPos.first, "some grid must be . (dot)");
  inf.ensuref(isRoadConnected(isRoad, dotPos), "road must be connected");
  
  const int Q = inf.readInt(MIN_Q, min(MAX_Q, N*N), "Q");
  inf.readEoln();
  
  for (int i=0; i<Q; i++) {
    inf.readInt(1, N, "r");
    inf.readSpace();
    inf.readInt(1, N, "c");
    inf.readEoln();
  }
}

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(1, LARGE_T, "T");
  ensuref((T==SAMPLE_T || T==SMALL_T || T==LARGE_T), "T");
  inf.readEoln();
  
  bool isSmallTestSet = T==SMALL_T;
  for (int i=0; i<T; ++i) {
    check(isSmallTestSet);
  }
  inf.readEof();
  return 0;
}
