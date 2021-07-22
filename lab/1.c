#include <stdio.h>

int main() {
  int n;
  printf("Enter a positive integer");
  scanf("%d", &n);
  if (n > 0) {
    if (n % 2) {
      printf("Odd");
    } else {
      printf("Even");
    }
  } else {
    printf("Number not positive");
  }
  return 0;
}
