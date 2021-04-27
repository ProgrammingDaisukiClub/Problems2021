#include <stdio.h>

void highway() {
    int n;
    scanf("%d", &n);

    int l = 0, r = 0;
    while (n-- > 0) {
        int p;
        scanf("%d", &p);

        switch (p) {
            case 0:
                l++;
                break;
            case 1:
                r++;
                break;
            case 2:
                l++;
                r++;
                break;
            default:
                break;
        }
    }

    printf("%d %d\n", l, r);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) highway();
    return 0;
}
