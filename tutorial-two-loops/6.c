// WAP to take input from user until user enters 0. Add all the positive number
// & display their sum as well as count. Add all the negative numbers & diplay
// their used & sum
#include <stdio.h>
int main() {
  printf("Enter numbers (0 to end)\n");
  int k = 0, l = 0, o = 1, p = 0, q = 0;
  while (o != 0) {
    scanf("%d", &o);
    if (o > 0) {
      k = k + o;
      p++;
    } else if (o < 0) {
      l = l + o;
      q++;
    }
  }
  printf("Positive: \n\tsum:%d \n\tcount:%d \n\taverage:%d \nNegative: "
         "\n\tsum:%d \n\tcount:%d \n\taverage:%d",
         k, p, k / p, l, q, l / q);
}
