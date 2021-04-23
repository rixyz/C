// WAP to find the largest of three different integer numbers just entered by
// the user.
#include <stdio.h>
int main() {
  int a, b, c, g;
  printf("Enter 3 integers:\n");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b) {
    if (a > c) {
      g = a;
    } else {
      g = c;
    }
  } else if (c > b) {
    g = c;
  } else {
    g = b;
  }
  printf("Largest integer: %d", g);
  return 0;
}
