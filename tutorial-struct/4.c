// WAP to read serial_number,price,brand_name,model_numberof different 20
// laptops using structure.
#include <stdio.h>
struct laptop_info {
  int serial_number;
  int price;
  char brand_name[20];
  char model_number[10];
};
int main(void) {
  struct laptop_info laptop[20];
  for (int i = 0; i < 20; i++) {
    printf("Enter Serial Number, Price, Brand Name and Model Number\n");
    scanf("%d", &laptop[i].serial_number);
    scanf("%d", &laptop[i].price);
    scanf("%s", laptop[i].brand_name);
    scanf("%s", laptop[i].model_number);
    printf("Serial Number:%d \nPrice:%d Brand Name:%s \nModel Number:%s\n", laptop[i].serial_number, laptop[i].price,
           laptop[i].brand_name, laptop[i].model_number);
  }
  return 0;
}
