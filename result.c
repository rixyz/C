//WAP to take % as input that student has obained. 
//If % is > 80 display distionction, 
//>60 and <80 display 1st div 
//else if >40 and <60 display 2nd div
//if <32 
#include <stdio.h>
int main() {
    int subA, subB, subC;
    float percent;
    scanf("%d %d %d",&subA, &subB, &subC);
    percent = (float)(subA+subB+subC)/3;
    printf("You percent is %.2f\n",percent);
    if (percent>=80){
        printf("You recieved Distinction");
    } else if (percent >=60) {
        printf("You recieved first division"); 
    } else if (percent >= 40) {
        printf("You recieved second division");
    } else {
        printf("You failed");
    }
}
