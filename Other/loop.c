//WAP to display numbers from n to 1. 
//WAP to display all numbers divisible by 3 from 1 to n where n is input given by user if n = 15, display 3,6,9,12,15
//WAP to take input from user until user enters 0. Add all the positive number & display their sum as well as count. Add all the negative numbers & diplay their used & sum
#include <stdio.h>
int main() {
    printf("");
    int i,n;
    scanf("%d",&n);
    for (i=n; i>=1;i--) {
            printf("%d\n",i);
    }
    
    int j,m;
    scanf("%d",&n);
    for (i=1; i<=n;i++) {
        if (i%3==0) {
            printf("%d\n",i);
        }
    }
    
    int c=0,k=0,l=0,o=1;
    while (o!=0) {
        scanf("%d",&o);
       if (o>0) {
           k=k+o;
       } else {
            l = l + o;
       }
       c=c+1;
    }
    printf("Count: %d Positive sum:%d Negative sum:%d",c,k,l);
    //i = 0;
    //while (i<3) {
    //    printf("Jhon\n");
    //    i++;
    //}
}
