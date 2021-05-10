// Write afunction areaofcircle() which accepts radius of float value and return
// the area of circle.Use this function to calculate area of fourcircles having
// different radii.
#include <stdio.h>
float areaofcircle(float r) { return 22.0 / 7.0 * r * r; }
int main() {
  float r;
  printf("Enter the radius of circle : ");
  scanf("%f", &r);
  printf("%f", areaofcircle(r));
  return 0;
}
