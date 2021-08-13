#include <stdio.h>
#include <string.h>
int main() {
  int a = 0, pali = 0;
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  int b = strlen(str) - 1;

  while (b > a) {
    if (str[a++] != str[b--]) {
      pali = 1;
      break;
    }
  }
  if (pali == 1)
    printf("Not palindrome");
  else
    printf("Palindrome");
  return 0;
}
