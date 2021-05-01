// WAP to add 2 num using function
#include <stdio.h>
float add(float, float); // Function Prototype if function is declared after
                         // main
int main() {
  float a, b, result;
  scanf("%f %f", &a, &b);
  result = add(a, b);
  printf("sum is %f", result);
}
float add(float p, float q) {
  float s;
  s = p + q;
  return s;
}
