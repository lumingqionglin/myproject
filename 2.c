#include <stdio.h>
int main() {
  int i, j, n, b, d, e, f, g;
  int a[10][10];
  int c[10];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < n; i++) {
    b = a[i][0];
    for (j = 0; j < n; j++) {
      if (b < a[i][j]) {
        b = a[i][j];
      }
    }
    c[i] = b;
  }
  d = c[0];
  e = c[0];
  for (i = 0; i < n; i++) {
    if (c[i] < d) {
      d = c[i];
      b = i;
    }
    if (c[i] > e) {
      e = c[i];
      f = i;
    }
  }
  for (i = 0; i < n; i++) {
    if (i == b) {
      g = i;
      i = f;
      for (j = 0; j < n; j++) {
        printf("%d ", a[i][j]);
      }
      printf("\n");
      i = g;
    } else if (i == f) {
      g = i;
      i = b;
      for (j = 0; j < n; j++) {
        printf("%d ", a[i][j]);
      }
      printf("\n");
      i = g;
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