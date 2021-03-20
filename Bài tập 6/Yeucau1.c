#include<stdio.h>

int main()
{
  unsigned int n, S = 0;
  scanf("%d", &n);
  for(int i = 1; i < n; i++) {
    if (n % i == 0)
      S += i;
  }
  if(S == n) {
    printf("%d la so hoan hao", n);
  } else printf("%d khong phai la so hoan hao", n);
  return 0;
}
