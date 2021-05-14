#include<stdio.h>

int main(void){
    int T, A, B, C, D, E;;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
        if(A == B + C + D){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}
