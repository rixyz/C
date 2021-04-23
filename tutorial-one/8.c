// WAP to read a positive integer and display the sum of digits in it.
#include <stdio.h>
int main() {
  int s = 0, a, n, b;
  printf("Enter a positive number:");
  scanf("%d", &a);
  n = a;
  while (n != 0) {
    b = n % 10;
    s = s + b;
    n = n / 10;
  }
  printf("Sum of positive number is: %d", s);
  return 0;
}
