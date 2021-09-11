#include <stdio.h>

/*structure declaration*/
struct student {
  char name[30];
  int age, marks[5];
};

int main() {
  struct student stu;

  printf("Name: ");
  scanf("%s", stu.name);
  printf("Age: ");
  scanf("%d", &stu.age);
  for (int i = 0; i < 5; i++) {
    printf("Marks of %d subject", i);
    scanf("%d", &stu.marks[i]);
  }

  printf("\nName: %s", stu.name);
  printf("Age: %d", stu.age);
  for (int i = 0; i < 5; i++) {
    printf("Marks of %d subject\n", stu.marks[i]);
  }
  return 0;
}
