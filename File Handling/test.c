#include <stdio.h>
struct test {
  char name[60];
  int i;
  char address[60];
} na;
void write() {
  FILE *ptr;
  ptr = fopen("testa.bin", "ab+");
  printf("Name: ");
  scanf("%[^\n]s", na.name);
  printf("Address: ");
  scanf("%[^\n]s", na.address);
  for (na.i = 0; na.i < 5; na.i++)
    fwrite(&na, sizeof(struct test), 1, ptr);
  fclose(ptr);
}
void read() {

  FILE *ptr;
  ptr = fopen("testa.bin", "rb");
  for (na.i = 0; na.i < 5; na.i++) {
    fread(&na, sizeof(struct test), 1, ptr);
    printf("i: %d n: %s, a: %s\n", na.i, na.name, na.address);
  }
  fclose(ptr);
}

int main() {
  write();
  // read();
  return 0;
}
