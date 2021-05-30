// WAP to find maximum and minumun value in an given array of n elements.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n, max, min, *array;
  printf("Number of array : ");
  scanf("%d", &n);
  array = (int *)malloc(n * sizeof(int));
  printf("Elements in array: \n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  min = max = array[0];
  for (int i = 0; i < n; i++) {
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }
  printf("Max: %d, Min: %d", max, min);
  return 0;
}
