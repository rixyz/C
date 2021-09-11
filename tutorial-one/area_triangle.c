// WAP to ask the user three sides of a triangle and display the area.Before
// computing area check whether the triangle is formed by the given sides or
// not.
#include <math.h>
#include <stdio.h>
int main() {
  float a, b, c, s, area;
  printf("Enter 3 sides of triangle: \n");
  scanf("%f %f %f", &a, &b, &c);
  if (a + b <= c || b + c <= a || c + a <= b) {
    printf("Invalid sides");
  } else {
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is %f\n", area);
  }
  return 0;
}
