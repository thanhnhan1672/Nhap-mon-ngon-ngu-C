#include <stdio.h>

int main () {
  int a[4];
   
  printf("nhap 4 so : ");
  for (int i = 0; i < 4; i++) {
    scanf("%d", &a[i]); 
  }
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    sum += a[i];  
  }
    printf("%d ", sum);
  return  0;
}
