#include<stdio.h>

int main()
{
  unsigned int n;
  float tong = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    tong += 1/(float)i;
  }
  printf("Tong  la: %f", tong);
  return 0;
}
