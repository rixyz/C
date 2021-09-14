// WAP to convert given character to lowercase if it is in uppercase and
// viceversa.
#include <stdio.h>
int main() {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);
  if (c >= 'a' && c <= 'z') {
    printf("%c", c - 32);
  } else if (c >= 'A' && c <= 'Z') {
    printf("%c", c + 32);
  } else {
    printf("Invalid character");
  }
  return 0;
}
