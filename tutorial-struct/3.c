// WAP to read name,age,height and marks obtainedin 5 different subjects by
// student.Also display the average marks.
#include <stdio.h>
struct studentInfo {
  char name[20];
  int age;
  int height;
  int marks[5];
};
int main(void) {
  struct studentInfo student;
  int avg = 0;
  printf("Enter name, age, height\n");
  gets(student.name);
  scanf("%d", &student.age);
  scanf("%d", &student.height);
  printf("Enter marks of 5 subject\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &student.marks[i]);
    avg += student.marks[i];
  }
  printf("Name: %s\nAge: %d\nHeight: %d\nAverage: %d\n", student.name, student.age,
         student.age, avg / 5);
  return 0;
}
