#include <stdio.h>
int large(int a, int b, int c) {
  if (a >= b && a >= c)
    return a;
  else if (b >= c)
    return b;
  else
    return c;
}

int main() {
  int a, b, c, largest;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  largest = large(a, b, c);
  printf("Largest number = %d", largest);
  return 0;
}
