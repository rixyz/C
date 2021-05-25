// WAP to take input from user and increment its value by 10 using
// function.Display result from main.
#include <stdio.h>
int sum(int *a) { return *a + 10; }

int main(void) {
  int a, b;
  printf("Enter number: ");
  scanf("%d", &a);
  printf("Addition: %d", sum(&a));
  return 0;
}
