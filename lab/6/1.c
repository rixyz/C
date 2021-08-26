#include <stdio.h>
int main() {

  int i, j, a, n, number[30];
  printf("Enter the value of N \n");
  scanf("%d", &n);

  for (i = 0; i < n; ++i) {
    printf("Enter the numbers \n");
    scanf("%d", &number[i]);
  }

  for (i = 0; i < n; ++i) {

    for (j = i + 1; j < n; ++j) {

      if (number[i] > number[j]) {

        a = number[i];
        number[i] = number[j];
        number[j] = a;
      }
    }
  }

  printf("%d\n", number[n - (n - 2)] + number[n - (n - 3)]);
}
