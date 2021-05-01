#include <stdio.h>

int main(void) {
  for (int i = 0b1100001; i <= 0b1111010; i++) {
    fprintf(stdout, "%c\n", i);
  }
  return 0;
}
