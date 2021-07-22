#include <stdio.h>

int main() {
  int n, sum = 0, count = -1;
  printf("Enter a integer(0 to exit)\n");
  do {
    scanf("%d", &n);
    if (n > 0) {
      sum += n;
      count++;
    } else if (n == 0) {
      printf("Average: %d", sum / count);
    }
  } while (n != 0);
}
