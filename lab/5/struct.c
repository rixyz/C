#include <stdio.h>

struct employee {
  char name[50];
  int age;
  float salary;
};

int main() {
  struct employee emp;

  printf("Name: ");
  scanf("%s", emp.name);
  printf("Age: ");
  scanf("%d", &emp.age);
  printf("Salary: ");
  scanf("%f", &emp.salary);

  printf("\nName: %s\n", emp.name);
  printf("Age: %d\n", emp.age);
  printf("Salary: %.2f\n", emp.salary);
  return 0;
}
