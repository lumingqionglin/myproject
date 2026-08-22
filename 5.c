#include <stdio.h>
int Fibonacci(int n);
int main() {
  int n, a;
  scanf("%d", &n);
  a = Fibonacci(n);
  printf("%d", a);
  getchar();
  getchar();
  return 0;
}
int Fibonacci(int n) {
  if (n == 1 || n == 2) {
    return 1;
  }
  int a, b, c;
  a = 1;
  b = 1;
  c = 0;
  for (int i = 0; i < 3; i++) {
    c = (a + b) % 10007;
    a = b;
    b = c;
  }
  return c;
}