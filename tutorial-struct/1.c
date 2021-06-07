// WAP to read name,location and phone number of an college using structure.
#include <stdio.h>
struct college {
  char name[20];
  char location[20];
  int phone;
};
int main(void) {
  struct college student;
  printf("Enter Name, Location and Phone no.:\n");
  gets(student.name);
  gets(student.location);
  scanf("%d", &student.phone);
  printf("Name:%s\n Location:%s\n Phone:%d\n", student.name, student.location, student.phone);
  return 0;
}
