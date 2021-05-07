#include <stdio.h>
#include <assert.h>
#define MAX 1000000
#define INF (1 << 28)

typedef struct {
    int dat[MAX];
    int head, tail;
} Queue;

void init(Queue* que) {
    que->head = que->tail = 0;
}

void push(Queue* que, int val) {
    que->dat[que->tail++] = val;
}

int pop(Queue* que) {
    int ret = que->dat[que->head++];
    return ret;
}

int size(Queue* que) {
    return que->tail - que->head;
}

int readi() {
    int x;
    scanf("%d", &x);
    return x;
}

int N, Q;
char G[100][100];
int sr[10], sc[10];
Queue que;
int dist[10][100][100];
const int dr[4] = {1, 0, -1, 0};
const int dc[4] = {0, 1, 0, -1};


void solve() {
    N = readi();
    for(int i = 0; i < N; i++) scanf("%s", G[i]);
    Q = readi();
    for(int i = 0; i < Q; i++) {
        scanf("%d %d", sr + i, sc + i);
        sr[i]--, sc[i]--;
    }
    
    for(int i = 0; i < Q; i++) {
        for(int j = 0; j < N; j++) for(int k = 0; k < N; k++) dist[i][j][k] = INF;
        dist[i][sr[i]][sc[i]] = 0;
        init(&que);
        push(&que, sr[i] * N + sc[i]);
        while(size(&que) > 0) {
            assert(que.tail >= que.head);
            int pos = pop(&que);
            int r = pos / N, c = pos % N;
            // fprintf(stderr, "r = %d, c = %d\n", r, c);
            for(int dir = 0; dir < 4; dir++) {
                int nr = r + dr[dir], nc = c + dc[dir];
                if(nr < 0 || nr >= N || nc < 0 || nc >= N || G[nr][nc] == '#') continue;
                if(dist[i][nr][nc] == INF) {
                    dist[i][nr][nc] = dist[i][r][c] + 1;
                    push(&que, nr * N + nc);
                } 
            }
        }
    }

    int ans = INF;

    for(int r = 0; r < N; r++) {
        for(int c = 0; c < N; c++) {
            if(G[r][c] == '#') continue;
            int sum = 0;
            for(int i = 0; i < Q; i++) sum += dist[i][r][c];
            if(ans > sum) ans = sum;
        }
    }

    printf("%d\n", ans);
}

int main(void) {
    int T = 1;
    T = readi();
    while(T--) solve();
}