#include <stdio.h>
#include <stdlib.h>
int main() {
  int arr[10];
  int i, sum = 0;
  float avg;
  FILE *fp;
  fp = fopen("data.txt", "w");
  if (fp == NULL) {
    exit(1);
  }
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[1]);
    fprintf(fp, "%d\n", arr[i]);
  }
  if (fclose(fp) != 0) {
    exit(1);
  }
  fp = fopen("data.txt", "r");
  if (fp == NULL) {
    exit(1);
  }
  for (i = 0; i < 10; i++) {
    fscanf(fp, "%d", &arr[1]);
    sum += arr[1];
  }
  avg = (float)sum / 10;
  if (fclose(fp) != 0) {
    exit(1);
  }
  fp = fopen("data.txt", "a");
  if (fp == NULL) {
    exit(1);
  }
  fprintf(fp, "%.2f\n", avg);
  printf("%.2f", avg);
  if (fclose(fp) != 0) {
    exit(1);
  }
  return 0;
}
