#include <fstream>
#include <string>
#include <set>
#include <utility>
#include <vector>
#include <algorithm>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void visit_all_node(
  const vector<vector<int>>& graph,
  const int nowIndex,
  const int parentIndex,
  vector<bool>& visited
) {
  visited[nowIndex] = true;
  for (const int nextIndex: graph[nowIndex]) {
    if (nextIndex!=parentIndex && !visited[nextIndex]) {
      visit_all_node(graph, nextIndex, nowIndex, visited);
    }
  }
}

bool is_graph_connected(const vector<vector<int>>& graph) {
  const int N = graph.size();
  vector<bool> visited(N, false);
  visit_all_node(graph, 0, -1, visited);
  return all_of(visited.begin(), visited.end(), [](bool flag) { return flag; });
}

void check() {
  int N = inf.readInt(MIN_N, MAX_N, "N");
  inf.readSpace();
  int M = inf.readInt(1, 2*N, "M");
  inf.readEoln();
  
  set<pair<int,int>> setAB;
  vector<vector<int>> graph(N);
  for (int i=0; i<M; i++) {
    int A = inf.readInt(1, N-1, "A");
    inf.readSpace();
    int B = inf.readInt(A+1, N, "B");
    inf.readEoln();
    
    setAB.insert({ A, B });
    graph[A-1].push_back(B-1);
    graph[B-1].push_back(A-1);
  }
  ensuref(setAB.size()==M, "i!=j => (A_i,B_i) != (A_j,B_j)");
  ensuref(is_graph_connected(graph), "the provided graph must be connected");
 
  int Q = inf.readInt(MIN_Q, MAX_Q, "Q");
  inf.readEoln();
  
  set<int> setD;
  for (int i=0; i<Q; i++) {
    int D = inf.readInt(1, N);
    setD.insert(D);
    if (i != Q-1) {
      inf.readSpace();
    }
  }
  ensuref(setD.size() == Q, "the number of D must be unique");
  inf.readEoln();
}

int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int T = inf.readInt(1, LARGE_T, "T");
  ensuref((T==SMALL_T || T==LARGE_T), "T");
  inf.readEoln();
  for (int i=0; i<T; ++i) {
    check();
  }
  inf.readEof();
  return 0;
}
