/* WAP to read serial_number,price,brand_name,model_numberof different 20
// laptops using structure.*/
#include <stdio.h>
struct laptop_info {
  int serial_number;
  int price;
  char brand_name[20];
  char model_number[10];
};
int main(void) {
  struct laptop_info laptop[20];
  int i = 0;
  for (i = 0; i < 20; i++) {
    printf("a:");
    scanf("%d", &laptop[i].serial_number);
    printf("b:");
    scanf("%d", &laptop[i].price);
    printf("c:");
    scanf("%s", laptop[i].brand_name);
    printf("d:");
    scanf("%s", laptop[i].model_number);
    printf("a:%d b:%d c:%s d:%s\n", laptop[i].serial_number, laptop[i].price,
           laptop[i].brand_name, laptop[i].model_number);
  }
  return 0;
}
