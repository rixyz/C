#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
  char *fName;
  char *lName;
  int age;
} Person;

int main(void) {
  Person p[2] = {{"Test", "User Name", 20}, {"Test2", "User2 Name2", 30}};
  Person pReadd;

  FILE *fp = fopen("test", "wb+");
  if (!fp) {
    printf("Error opening file");
    exit(1);
  }

  for (int i = 0; i < 2; i++)
    fwrite(&p[i], sizeof(Person), 1, fp);

  fseek(fp, 0, SEEK_SET);

  for (int i = 0; i < 2; i++) {
    fread(&pReadd, sizeof(Person), 1, fp);
    printf("%s %s: %d\n", pReadd.fName, pReadd.lName, pReadd.age);
  }

  return 0;
}
