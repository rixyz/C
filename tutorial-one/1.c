//WAP to take feignheit as input from user and convert it onto Celcius
#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter a fahrenheit\n");
    scanf("%f",&f);
    c = (f - 32) * 5/9;
    printf("Celcius is %.2f",c); 
    return 0;
}
