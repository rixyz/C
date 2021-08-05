#include <stdio.h>
int main() {
  int n, min, max;
  int arr[100];
  printf("Enter the value of N \n");
  scanf("%d", &n);

  printf("Enter the numbers \n");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }
  max = min = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] > max)
      max = arr[i];

    if (arr[i] < min)
      min = arr[i];
  }

  printf("Largest= %d\n", max);
  printf("Smallest= %d", min);

  return 0;
}
