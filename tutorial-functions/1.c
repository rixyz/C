#include <stdio.h>
int isOdd(int n) { return n % 2; }
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (isOdd(n)) {
    printf("%d is odd", n);
  } else {
    printf("%d is even", n);
  }
  return 0;
}
