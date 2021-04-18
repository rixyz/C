//WAP to display all numbers divisible by 3 from 1 to n where n is input given by user if n = 15, display 3,6,9,12,15
#include <stdio.h>
int main() {
    printf("Input a number: ");
    int i,n;
    scanf("%d",&n);
    for (i=1; i<=n;i++) {
        if (i%3==0) {
            printf("%d\n",i);
        }
    }
}
