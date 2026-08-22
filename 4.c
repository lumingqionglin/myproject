#include <stdio.h>
#include <string.h>
int main() {
  int n, i, j = 0;
  char a[12];
  char b[12];
  scanf("%s", a);
  scanf("%s", b);
  n = strlen(b);
  if (strlen(a) != strlen(b)) {
    printf("1");
    return 0;
  } else {
    for (i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        j = 1;
        break;
      }
    }
    if (j == 0) {
      printf("2");
      return 0;
    }
    j = 0;
    for (i = 0; i < n; i++) {
      if (a[i] >= 'a' && a[i] <= 'z') {
        a[i] -= 32;
      }
      if (b[i] >= 'a' && b[i] <= 'z') {
        b[i] -= 32;
      }
    }
    for (i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        j = 1;
        break;
      }
    }
    if (j == 0) {
      printf("3");
      return 0;
    }
  }
  printf("4");
  getchar();
  getchar();
  return 0;
}