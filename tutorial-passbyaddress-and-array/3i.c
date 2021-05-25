// 3.WAP to add and substract two values using function.
// i.Use different function for addition and substraction and display result
// inside function.
#include <stdio.h>
void sum(int *a, int *b) { printf("Addition: %d\n", *a + *b); }
void sub(int *a, int *b) { printf("Substraction: %d", *a - *b); }

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  sum(&a, &b);
  sub(&a, &b);
  return 0;
}
