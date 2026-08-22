#include <stdio.h>
#include <string.h>

void delete_the(char (*word)[200], int len) {
  for (int i = 0; i < len-1; i++) {
    char tag[4] = {"the"};
    char tag1[4] = {"The"};
    int temp = strcmp(word[i], tag);
    int temp1 = strcmp(word[i], tag1);
    if (temp == 0 || temp1 == 0) {
      continue;
    } else {
      printf("%s", word[i]);
    }
  }
}

int main() {
  char word[1000][200] = {0};
  char ch = {0};
  int rows = 0;
  int cols = 0;
  while (ch != '#') {
    scanf("%c", &ch);
    if (ch == '#') {
      rows++;
      break;
    } else if (ch >= 32 && ch <= 64||ch==10) {
      rows++;
      cols = 0;
      word[rows][cols] = ch;
      cols = 0;
      rows++;
    } else {
      word[rows][cols] = ch;
      cols++;
    }
  }
  delete_the(word, rows);
}