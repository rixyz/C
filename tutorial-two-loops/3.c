// WAP to find sum of natural numbers upto n where n is entered by the user.
#include <stdio.h>
int main() {
  int n, c = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    c += i;
  }
  printf("%d", c);
  return 0;
}
