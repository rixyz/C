// WAP to calculate norm and trace of matrix.
#include <math.h>
#include <stdio.h>
int main(void) {
  int matrix[3][3], trace;
  float normal, n = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    trace += matrix[i][i];
    for (int j = 0; j < 3; j++) {
      n += matrix[i][j] * matrix[i][j];
    }
  }
  normal = sqrt(n);
  printf("%d\n%f", trace, normal);
  return 0;
}
