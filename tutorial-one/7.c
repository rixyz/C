//WAP to read the marks secured by a student and display the appropriate message as follows:Marks greater or equal to 40 and less than 65 display PASS.Marks greater or equal to 65 and less than 80 display FIRST DIVISION.Marks greater or equal to 80 display DISTINCTION.Otherwise FAIL.
#include <stdio.h>
int main() {
  int percent;
  printf("Enter marks:");
  scanf("%d", &percent);
  if (percent >= 80) {
    printf("DISTINCTION");
  } else if (percent >= 65) {
    printf("FIRST DIVISION");
  } else if (percent >= 40) {
    printf("PASS");
  } else {
    printf("FAILED");
  }
}
