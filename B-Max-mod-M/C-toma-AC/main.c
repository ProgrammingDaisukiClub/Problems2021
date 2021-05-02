#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0){
        int a, b, m;
        scanf("%d %d %d", &a, &b, &m);
        if (a%m > b%m) {
            printf("%d\n", a);
        } else {
            printf("%d\n", b);
        }
    }
    return 0;
}
