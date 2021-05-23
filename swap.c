#include <stdio.h>
int swap(int x, int y);

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  swap(x, y);
}

int swap(int x, int y) {
  x = x + y;
  y = x - y;
  x = x - y;
  printf("%d %d", x, y);
  return 0;
}
