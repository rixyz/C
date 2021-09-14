// WAP to display characters from a to z.
#include <stdio.h>
int main() {
  for (int i = 1; i <= 26; i++) {
    printf("%c", i + 96);
  }
  for (char i = 'a'; i <= 'z'; i++) {
    printf("%c", i);
  }
}
