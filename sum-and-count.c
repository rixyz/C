//WAP to take input from user until user enters 0. Add all the positive number & display their sum as well as count. Add all the negative numbers & diplay their used & sum
#include <stdio.h>
int main() {
    printf("Enter numbers (0 to end)\n");
    int c=0,k=0,l=0,o=1;
    while (o!=0) {
        scanf("%d",&o);
       if (o>0) {
           k = k + o;
       } else {
            l = l + o;
       }
       c=c+1;
    }
    printf("Count:%d | Positive sum:%d | Negative sum:%d\n",c,k,l);
}
