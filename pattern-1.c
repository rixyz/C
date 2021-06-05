//WAP to print 1223334444
#include <stdio.h>
int main() {
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    int k = 1;
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
