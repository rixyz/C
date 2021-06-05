// WAP to swap two values using function and display result from main.
#include <stdio.h>
void swap(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
int main(void) {
  int a, b;
  printf("Enter A and B: \n");
  scanf("%d %d", &a, &b);
  swap(&a, &b);
  printf("A= %d\nB= %d", a, b);
  return 0;
}
