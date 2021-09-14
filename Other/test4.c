#include <stdio.h>
int main() {
  int a = 50, *p;
  *p = &a;
  printf(" p=%x\n *p[Pointer:Value of Address]=%d\n &a[Address]=%x\n "
         "a[Value]=%d\n\n",
         p, *p, &a, a);
  /*  p++;
    printf("p++\n p=%x\n *p[Pointer:Value of Address]=%d\n &a[Address]=%x\n "
           "a[Value]=%d\n\n",
           p, *p, &a, a);
    a++;
    printf("a++\n p=%x\n *p[Pointer:Value of Address]=%d\n &a[Address]=%x\n "
           "a[Value]=%d\n\n",
           p, *p, &a, a);
    int *q, b = 2;
    q = b;
    printf("value in q for q=b : %d, b : %d\n", q, b);
    *q = &b;
    printf("value in q for *q=&b : %d, b : %d", *q, b);
    */
  return 0;
}
