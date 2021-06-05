//WAP that prompts a user to input average marks of a student and add 10% bonus marks if his/her average marks is greater than or equal to 65%.
#include <stdio.h>
int main() {
    float m;
    printf("Enter average marks:");
    scanf("%f",&m);
    if (m==100) {
    }
    else if (m>=65) {
        m+=(m/10);
    }
    printf("Final score:%.2f",m);
    return 0;
}
