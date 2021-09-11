// WAP to add,multiply,divide and substract2 numbers given by the user.Use
// separate function foradd,multiply,divide and substract.Display result from
// main function.
#include <stdio.h>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int multi(int a, int b) { return a * b; }
float div(int a, int b) { return (float)a / b; }

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Add: %d\n", add(a, b));
  printf("Substract: %d\n", sub(a, b));
  printf("Multiply %d\n", multi(a, b));
  printf("Divide %.2f\n", div(a, b));
  return 0;
}
