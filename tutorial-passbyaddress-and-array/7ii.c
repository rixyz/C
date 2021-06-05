// WAP to read 2 matrices from user.Add them and display result.
// ii)Make different function to take input from userand to display
// values.
#include <stdio.h>
void takeInput(int matrix[2][2]);
void output(int matrix[2][2]);

int main(void) {
  int a[2][2], b[2][2], c[2][2];
  printf("Enter first matrix\n");
  takeInput(a);
  printf("\nEnter second matrix\n");
  takeInput(b);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
  printf("\nSum:\n");
  output(c);
  return 0;
}

void takeInput(int matrix[2][2]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
}

void output(int matrix[2][2]) {
  for (int i = 0; i < 2; i++) {
    printf("[ ");
    for (int j = 0; j < 2; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("]\n");
  }
}
