// WAP to display following pattern:
#include <stdio.h>
int main() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 5; i >= 2; i--) {
    for (int j = 5; j >= i; j--) {
      printf("%d", j);
    }
    printf("\n");
  }

  int k = 1;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j < i; j++) {
      printf("%d", k);
      k++;
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c", (j + 96));
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
