#include <stdio.h>

int main(void) {
    int T;

    scanf("%d", &T);

    while(T--) {
        int N, L, i, sum = 0;
        
        scanf("%d", &N);

        for(i = 0; i < N; i++) {
            scanf("%d", &L);
            sum += L;
        }

        printf("%d\n", sum);
    }
}
