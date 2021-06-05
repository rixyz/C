// WAP to read name,location and phone number of an college using structure.
#include <stdio.h>
struct college {
  char name[20];
  char location[20];
  int phone;
};
int main(void) {
  struct college student;
  get(student.name);
  get(student.location);
  scanf("%d", &student.phone);
  printf("%s %s %d", student.name, student.location, student.phone);
}
