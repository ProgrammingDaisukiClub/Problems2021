#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    char S[101];
    while (T--) {
        int N;
        int ans = 1;
        scanf("%d", &N);
        // char S[N + 1];
        // これをすると制約次第で領域不足が発生する
        scanf("%s", S);
        if(N % 4 != 0){
            printf("No\n");
            continue;
        }
        for (int i = 0; i < N; i+=4) {
            if(!(S[i]=='m'&&S[i+1]=='o'&&S[i+2]=='h'&&S[i+3]=='u')){
                ans = 0;
                break;
            }
        }
        if (ans) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}