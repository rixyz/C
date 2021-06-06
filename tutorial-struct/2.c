// WAP that takes name,salary and date of birth of an employee and display
// itusing structure.Data members of date of birth(Y/M/D)must be on separate
// structure.
#include <stdio.h>
struct dateOfBirth {
  int date;
  int month;
  int year;
};
struct employee {
  char name[20];
  int salary;
  struct dateOfBirth dob;
};
int main(void) {
  struct employee person;
  printf("Enter Name, Salary, DOB:dd/mm/yyyy\n");
  gets(person.name);
  scanf("%d", &person.salary);
  scanf("%d/%d/%d", &person.dob.date, &person.dob.month, &person.dob.year);
  printf("Name: %s\nSalary: %d\nDOB:%d/%d/%d\n", person.name, person.salary,
         person.dob.date, person.dob.month, person.dob.year);
  return 0;
}
