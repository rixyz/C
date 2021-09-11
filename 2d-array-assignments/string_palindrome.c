// WAP to check whether given string is palindrome or not.A palindrom word
// is sequence of characters which reads the same backward as forward, such as
// madam or racecar.You can use strcmp() function to compare 2 strings.
#include <stdio.h>
#include <string.h>
int main(void) {
  char string[32], pali[32];
  int n = 0;
  printf("Enter a string");
  scanf("%[^\n]s", &string);
  // gets(string);
  while (string[n] != '\0') {
    n++;
  }

  for (int i = n, c = 0; i >= 0; i--) {
    pali[i - 1] = string[c];
    c++;
  }
  if (strcmp(string, pali)) {
    printf("is not palindrome");
  } else {
    printf("is palindrome");
  }
  return 0;
}
