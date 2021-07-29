#include <stdio.h>

int Fib(int n) {
  if (n == 0 || n == 1)
    return n;
  else
    return (Fib(n - 1) + Fib(n - 2));
}
int main() {
  int n, i = 0, c;
  scanf("%d", &n);
  for (c = 1; c <= n; c++) {
    printf("%d ", Fib(i));
    i++;
  }

  return 0;
}
