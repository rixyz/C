// WAP to print multipication table from 1 to 10
#include <stdio.h>
int main() {
  for (int i = 0; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      printf("%d X %d = %d\n", i, j, j * i);
    }
    printf("\n");
  }
  return 0;
}
