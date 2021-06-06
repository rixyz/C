// WAP to read name,price and code of product in a supermarket.Pass structure to
// user defined function display(.....)anddisplay values there.
#include <stdio.h>
struct product_info {
  char name[10];
  int price;
  char code[10];
};
void display(struct product_info products) {
  printf("%s %d %s\n", products.name, products.price, products.code);
}
int main(void) {
  struct product_info product;
  printf("Enter name, price, code");
  scanf("%s", product.name);
  scanf("%d", &product.price);
  scanf("%s", product.code);
  display(product);
  return 0;
}
