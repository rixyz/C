// 3.WAP to add and substract two values using function.
// iUse different function for addition and substraction and display result from
// main.
#include <stdio.h>
int sum(int *a, int *b) { return *a + *b; }
int sub(int *a, int *b) { return *a - *b; }

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Addition: %d\n", sum(&a, &b));
  printf("Substraction: %d", sub(&a, &b));
  return 0;
}
