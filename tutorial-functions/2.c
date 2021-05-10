// WAP to sum digits on any given number using function.
#include <stdio.h>
int sum_digit(int n) {
  int total = 0, d;
  while (n) {
    d = n % 10;
    total += d;
    n /= 10;
  }
  return total;
}
int main() {
  int n;
  printf("Enter a number: \n");
  scanf("%d", &n);
  printf("Sum of given number is %d", sum_digit(n));
}
