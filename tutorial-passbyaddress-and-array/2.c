#include <stdio.h>
int main(void) {
  double a = 50, *p = &a;
  printf("a=%lf\n", a);
  printf("&a=%d\n", &a);
  printf("p=%d\n", p);
  printf("*p=%lf\n", *p);
  int b = 20, *d;
  *d = &b;
  printf("*d=%d\n", d);
  p++;
  printf("p=%d\n", p);
  printf("*d=%d\n", d);
}
