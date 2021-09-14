//WAP to find quadratic equation ax^2+bx+c values r
//a) imaginary
//b) real & unreal
//c) equal and real
#include <stdio.h>
#include <math.h>
int main () {
    int a,b,c;
    float d, xA,xB;
    scanf("%d %d %d",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    printf("%.2f is ",d);
    if (d==0) {
        printf("equal and unreal number");
    } else if (d>0) {
        printf("Unequal and Real");
    } else {
        printf("Imaginary");
    }
    xA = (- b + sqrt(fabs(d))) / 2 * a;
    xB = (- b - sqrt(fabs(d))) / 2 * a;
    printf("\nX1 = %.2f and X2 = %.2f", xA, xB);
}
