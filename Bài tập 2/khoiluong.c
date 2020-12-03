#include <stdio.h>

int main(void) {
  int m;
  scanf("%d", &m);
  printf("kg = %dg\n", m * 1000);
  printf("KG  | G\n");
  printf("%d   |%d", m, m * 1000);
  return 0;
}
