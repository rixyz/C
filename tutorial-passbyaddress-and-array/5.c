//.WAP to take n input in array from user and display their average.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int *array, n, sum = 0;
  printf("Number of value:\n");
  scanf("%d", &n);
  array = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
  }
  printf("Average: %f", (float)sum / n);
  free(array);
  return 0;
}
