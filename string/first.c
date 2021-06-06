#include <stdio.h>
#include <string.h>
typedef struct {

  char name[20];
  int age;
  float salary;
} employee;
int main(void) {
  employee eone;
  printf("name age salary\n");
  // scanf("%s", eone.name);
  // gets(eone.name);
  // puts(eone.name);
  scanf("%[^\n]s", &eone.name);
  scanf("%d,%f", &eone.age, &eone.salary);
  printf("%s %d %f", eone.name, eone.age, eone.salary);
  return 0;
}
