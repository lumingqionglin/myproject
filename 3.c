#include <stdio.h>
int main() {
  int i, j, n, b, d, f, g;
  int a[10][10];
  scanf("%d", &n);
  if (n < 2 || n > 10) {
    return 0;
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  d = a[0][0];
  f = a[0][0];
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (d < a[i][j]) {
        d = a[i][j];
        b = i;
      }
      if (f > a[i][j]) {
        f = a[i][j];
        g = i;
      }
    }
  }

  for (i = 0; i < n; i++) {
    if (i == b && b != g) {
      for (j = 0; j < n; j++) {
        printf("%d ", a[g][j]);
      }
      printf("\n");
    } else if (i == g && b != g) {
      for (j = 0; j < n; j++) {
        printf("%d ", a[b][j]);
      }
      printf("\n");
    } else {
      for (j = 0; j < n; j++) {
        printf("%d ", a[i][j]);
      }
      printf("\n");
    }
  }
  getchar();
  getchar();
  return 0;
}