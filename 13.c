#include <stdio.h>
#include <string.h>
char *copy(char arr[], int n);
int main() {
  int n;
  scanf("%d", &n);
  char arr[1000] = {'A', '\0'};
  for (int i = 0; i < n - 1; i++) {
    copy(arr, i);
  }
  printf("%s", arr);
  return 0;
}
char *copy(char arr[], int n) {
  char srr[1000];
  strcpy(srr, arr);
  char c = 'A' + n + 1;
  char dest[2] = {c, '\0'};
  strcat(arr, dest);
  strcat(arr, srr);
  return arr;
}