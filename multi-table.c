//WAP to print multipication table of n
#include <stdio.h>
int main() {
    int n,x;
    printf("Enter an integer and it's multiplier:\n");
    scanf("%d %d",&n,&x);
    for (int i=0; i<=x; i++) {
        printf("%d X %d = %d\n",n,i,n*i);
    }
}
