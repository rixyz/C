// 3.WAP to add and substract two values using function.
// iii.Use same function for addition and substraction and display result from
// main
#include <stdio.h>
int sum(int *a, int *b, int c) { return c ? *a + *b : *a - *b; }

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Addition: %d\n", sum(&a, &b, 1));
  printf("Substraction: %d", sum(&a, &b, 0));
}
