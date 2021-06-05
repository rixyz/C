// z=x*x+y*y
#include <stdio.h>
int add(int a, int b);
int main() {
  int x, y, sum;
  scanf("%d %d", &x, &y);
  sum = add(x, y);
  printf("%d", sum);
}

int add(int a, int b) { return a * a + b + b; }
