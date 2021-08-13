#include <stdio.h>
int main() {
  int i, j, n1, n2, a[10][10], sum = 0;

  printf("\nEnter the number of  rows and column:");
  scanf("%d %d", &n1, &n2);
  if (n1 == n2) {
    for (i = 0; i < n1; i++) {
      for (j = 0; j < n2; j++) {
        printf("Enter a[%d][%d]", i, j);
        scanf("%d", &a[i][j]);
        if (i == j) {
          sum += a[i][j];
        }
      }
    }
  } else {
    printf("Trace can't be calculated. not a square matrix");
  }
  printf("Trace: %d", sum);
  return 0;
}
