#include <stdio.h>
int main() {
  int i, j, n, m, a[10][10], sum = 0;

  printf("\nEnter the number of  rows and column:");
  scanf("%d %d", &n, &m);
  if (n == m) {
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        printf("Enter a[%d][%d]", i, j);
        scanf("%d", &a[i][j]);
        if (i == j)
          sum += a[i][j];
      }
    }
    printf("Trace: %d", sum);
  } else 
      printf("Trace can't be calculated. not a square matrix");
  return 0;
}
