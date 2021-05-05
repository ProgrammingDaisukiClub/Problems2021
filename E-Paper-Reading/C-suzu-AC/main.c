#include <stdio.h>

void swap (int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort (int array[], int array_size) {
  int i, j;
  for (i = 0; i < array_size - 1; i++) {
    for (j = array_size - 1; j >= i + 1; j--) {
      if (array[j] < array[j - 1]) {
        swap(&array[j], &array[j - 1]);
      }
    }
  }
}

int main() {
  int T;
  scanf("%d", &T);
  int a[500];
  while (T--) {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
      scanf("%d", &a[i]);
    }
    bubble_sort(a, N);
    printf("%d\n", a[0]+a[1]);
  }
  return 0;
}