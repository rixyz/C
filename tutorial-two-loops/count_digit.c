// WAP to count digits in a given number.If n=3234 then digits=4
#include <stdio.h>
int main() {
  int n, c = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n != 0) {
    c++;
    n = n / 10;
  }
  printf("%d", c);
  return 0;
}
