#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <array>
using namespace std;

constexpr array<int, 4> dys{0, 1, 0, -1};
constexpr array<int, 4> dxs{1, 0, -1, 0};
constexpr int max_N = 1024;

array<array<char, max_N>, max_N> A;
array<array<bool, max_N>, max_N> searched;
struct QueueObject{
    int y, x, distance;
};
array<QueueObject, max_N * max_N> q;
void solve(){
    int N, Q;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%s", &A[i][0]);
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++) {
        int R, C;
        scanf("%d %d", &R, &C);
        A[R-1][C-1] = '*';
    }
    if(Q==1) {
        printf("0\n");
        return;
    }
    int answer = 1e9;
    for(int y_start = 0; y_start < N; y_start++){
        for(int x_start = 0; x_start < N; x_start++){
            if(A[y_start][x_start] == '#') continue;
            int sum_distances = 0;
            int visit_count = 0;
            QueueObject* q_left = (QueueObject*)q.data();
            QueueObject* q_right = q_left + 1;
            q[0] = QueueObject{y_start, x_start, 0};
            for(int y = 0; y < N; y++) for(int x = 0; x < N; x++) searched[y][x] = false;
            searched[y_start][x_start] = true;
            if(A[y_start][x_start] == '*') visit_count++;
            while(q_left != q_right && sum_distances + (Q - visit_count) * (q_left->distance + 1) < answer){
                for(int d = 0; d < 4; d++){
                    const int y = q_left->y + dys[d];
                    const int x = q_left->x + dxs[d];
                    if (y == -1 || y == N || x == -1 || x == N || A[y][x] == '#' || searched[y][x]) continue;
                    searched[y][x] = true;
                    if (A[y][x] == '*') {
                        visit_count++;
                        sum_distances += q_left->distance + 1;
                        if(visit_count == Q) {
                            if(answer > sum_distances) answer = sum_distances;
                            goto next_start;
                        }
                    }
                    q_right->y = y;
                    q_right->x = x;
                    q_right->distance = q_left->distance + 1;
                    q_right++;
                }
                q_left++;
            }
            next_start:;
        }
    }
    printf("%d\n", answer);
}

int main(void){
    int T;
    scanf("%d", &T);
    while(T-- > 0) solve();
}
