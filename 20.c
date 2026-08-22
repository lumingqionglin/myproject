#include <stdio.h>
#include <string.h>
int main() {
  char fruits[20][20];
  int count[20] = {0};
  int total = 0;
  int n = 0;
  while (scanf("%s", fruits[total]) == 1) {
    total++;
    if (getchar() == '\n') {
      break;
    }
  }
  for (int i = 0; i < total; i++) {
    for (int k = 0; k < i; k++) {
      n = 0;
      if (strcmp(fruits[i], fruits[k]) == 0) {
        n = 1;
        break;
      }
    }
    if (n == 1) {
      continue;
    }
    for (int j = 0; j < total; j++) {
      if (strcmp(fruits[i], fruits[j]) == 0) {
        count[i]++;
      }
    }
    printf("%s:%d\n", fruits[i], count[i]);
  }
  return 0;
}