#include <stdio.h>
#include <stdlib.h>

char *scan(char *string) {
  int i = 0;
  int c;                         // as getchar() returns `int`
  string = malloc(sizeof(char)); // allocating memory

  string[0] = '\0';

  while ((c = getchar()) != '\n' && c != EOF) {
    string = realloc(string, (i + 2) * sizeof(char)); // reallocating memory
    string[i] = (char)c;  // type casting `int` to `char`
    string[i + 1] = '\0'; // inserting null character at the end
    i += 1;
  }

  return string;
}

int main() {
  char *str;
  printf("%s", scan(str));
}
