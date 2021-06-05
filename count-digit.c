//WAP to count number digit in a given number number n
#include <stdio.h>
int main() {
    int n,c=0;
    printf("Enter numbers:");
    scanf("%d",&n);
    while (n!=0) {
        n=n/10;
        c=c+1; 
    }
    printf("Number of digit: %d",c);
}
