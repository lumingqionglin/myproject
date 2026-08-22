#include <stdio.h>
int is_reverse(int a, int b);
void find_all_reverse(int n, int pNumber[], int *num_result);
int main() {
  int a = 1, b = 0, n;
  int pNumber[1000];
  int *num_result = &b;
  scanf("%d", &n);
  find_all_reverse(n, pNumber, num_result);
  if (b == 0) {
    printf("There's no reverse number");
  } else {
    printf("The reverse number is:\n");
    for (int i = 0; i < b; i++) {
      printf("%d\n", pNumber[i]);
    }
  }
  return 0;
}
int is_reverse(int a, int b) {
  int c = 0;
  while (a != 0) {
    c *= 10;
    c += a % 10;
    a /= 10;
  }
  if (b == c) {
    return 1;
  } else {
    return 0;
  }
}
void find_all_reverse(int n, int pNumber[], int *num_result) {
  int a = 0, b = 1;
  for (int i = 0; i < n - 1; i++) {
    b *= 10;
  }
  for (int i = b; i < b * 2; i++) {
    if (i % 2 == 1 && is_reverse(i, i * 9)) {
      pNumber[a] = i;
      a++;
    }
  }
  *num_result = a;
}
