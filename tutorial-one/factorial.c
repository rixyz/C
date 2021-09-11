// WAP to read a non negative integer and display its factorial
#include <stdio.h>
int main() {
  int n, s = 1;
  printf("Enter a positive number:");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    s = s * i;
  }
  printf("Factorial is %d", s);
  return 0;
}
