#include <stdio.h>
int main() {
  int a = 5, *b;
  b = &a;
  printf("*b=%d b=%x &a=%x a=%d\n", *b, b, &a, a);
  int arr[5];
  printf("%d", &arr);
}
