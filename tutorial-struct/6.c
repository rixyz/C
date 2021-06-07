// WAP to read brand_name,modelnumber,and price of 10 mobile phones.Display
// those phones whose price is below 10000.
#include <stdio.h>
struct mobile_info {
  char brand_name[10];
  char modelnumber[10];
  int price;
};
int main(void) {
  struct mobile_info mobile[10];
  for (int i = 0; i < 10; i++) {
    printf("Enter Brand name, modelnumber, price\n");
    scanf("%s", mobile[i].brand_name);
    scanf("%s", mobile[i].modelnumber);
    scanf("%d", &mobile[i].price);
    if (mobile[i].price < 10000) {
      printf("%s %s %d\n", mobile[i].brand_name, mobile[i].modelnumber,
             mobile[i].price);
    }
  }
  return 0;
}
