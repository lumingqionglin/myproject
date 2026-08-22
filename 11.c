#include <stdio.h>
int main() {
  char arr[100];
  int m, n;
  fgets(arr, 101, stdin);
  scanf("%d%d", &m, &n);
  for (int i = m - 1; i < m + n - 1; i++) {
    printf("%c", arr[i]);
  }
  return 0;
}