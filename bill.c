// WAP to generate bill for department store in the following format
// SN    Particular    Price
// 1     Bread         30
#include <stdio.h> 
int main() {
    int n,p=0,q;
    printf("SN\tParticulars\tPrice\n");
    printf("1\tBread\t\t30\n");
    printf("2\tJam\t\t60\n");
    printf("3\tButter\t\t90\n");
    printf("Enter a number\n");
    scanf("%d",&n);
    if (n==1) {
       p = 30; 
    } else if (n==2) {
        p = 60;
    } else if (n==3) {
        p = 90;
    } else {
        printf("Invalid number");
    }

    if (p!=0) {
        printf("Enter quantity");
        scanf("%d",&q);
        printf("Total price is %d",p*q);
    }
}
