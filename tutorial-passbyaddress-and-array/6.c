// WAP to take n input from user in an array.Add all the even numbers and odd
// numbers separately.Display count of even numbes,odd numbers and average of
// even and odd separately.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int *array, oddSum = 0, evenSum = 0, oddCount = 0, evenCount = 0, n;
  printf("Number of value:\n");
  scanf("%d", &n);
  array = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    if (array[i] % 2) {
      oddCount++;
      oddSum += array[i];
    } else {
      evenCount++;
      evenSum += array[i];
    }
  }
  printf("ODD\n\tCount:%d Average: %d\nEVEN\n\tCount:%d Average: %d", oddCount,
         oddSum / oddCount, evenCount, evenSum / evenCount);
  free(array);
  return 0;
}
