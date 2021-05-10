// WAP to find the largest among three numbers using function and display
// largest number from main.
#include <stdio.h>
int greater(int a, int b, int c) {
  if (a > b) {
    if (a > c) {
      return a;
    } else {
      return c;
    }
  } else {
    if (b > c) {
      return b;
    } else {
      return c;
    }
  }
}

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d is the largest number", greater(a, b, c));
}
