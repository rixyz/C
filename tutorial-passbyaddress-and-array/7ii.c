
// WAP to read 2 matrices from user.Add them and display result.
// ii)Make different function to take input from userand to display
// values.
#include <stdio.h>
int firstMatrix() {
  int first[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("first[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &first[i][j]);
    }
  }
  return first;
}

int secMatrix() {
  int sec[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("second[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &sec[i][j]);
    }
  }
  return sec;
}
int main(void) {
  int sum[2][2], first[2][2], sec[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", first[i][j] + sec[i][j]);
    }
    printf("\n");
  }
  return 0;
}
