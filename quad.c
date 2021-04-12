//WAP to find quadratic equation ax^2+bx+c values r
//a) imaginary
//b) real & unreal
//c) equal and real
#include <stdio.h> 
#include <math.h> 
int main () {
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    printf("%d is ",d);
    if (d==0) {
        printf("equal and unreal number");
    } else if (d>0) {
        printf("Real and unequal");
    } else {
        printf("Imaginary");
    }
}
