#include <stdio.h>
char code_input() {
  char s, membership;
  printf("Services\n\nTraditional Body Massage (B)\nHot Stone Massage "
         "(H)\nFacial Massage (F)\nEnter code of service(B/H/F): ");
  scanf("%c", &s);
  if (s == 'B' || s == 'H' || s == 'F') {
    return s;
  } else {
    code_input();
  }
}
char member_input() {
  char membership;
  printf("Enter membership plan(N – Non Member/ M – Member): ");
  scanf(" %c", &membership);
  if (membership == 'N' || membership == 'M') {
    return membership;
  } else {
    member_input();
  }
}
int main(void) {
  char s, membership;
  s = code_input();
  membership = member_input();
  float price, nm_discount, m_discount;
  if (s == 'B') {
    price = 29;
    nm_discount = 10;
    m_discount = 20;
  } else if (s == 'H') {
    price = 18;
    nm_discount = 10;
    m_discount = 15;
  } else if (s == 'F') {
    price = 14;
    nm_discount = 0;
    m_discount = 20;
  }
  if (membership == 'N') {
    printf("Price: %.2f", price - (price * nm_discount / 100));
  } else if (membership == 'M') {
    printf("Price: %.2f", price - (price * m_discount / 100));
  }
}
