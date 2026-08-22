#include <stdio.h>
void delete_the(char (*p)[100]);
int main() {
  char arr[100][100] = {0};
  char (*p)[100] = arr;
  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < 100; j++) {
      scanf("%c", &arr[i][j]);
      if (arr[i][j] == '.') {
        getchar();
        break;
      }
    }
    printf("c");
  }
  printf("a");
  delete_the(p);
  printf("b");
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      if (arr[i][j] == '#') {
        continue;
      }
      printf("%c", arr[i][j]);
      if (arr[i][j] == '.') {
        break;
      }
    }
  }
  return 0;
}
void delete_the(char (*p)[100]) {
  int j = 0;
  int n = 98;
  do {
    for (j = 0; j < n; j++) {
      if ((*p)[j] == 't' && (*p)[j + 1] == 'h' && (*p)[j + 2] == 'e' &&
          (*p)[j + 3] == ' ') {
        for (int b = j; b < n; b++) {
          (*p)[b] = (*p)[b + 3];
        }
        j--;
        n -= 3;
      }
    }
    p++;
  } while ((*p)[j] != '#');
}
/*I , rather than you , should do the work.#
Because only I have the ability.
these are mine.
you are right the.#*/