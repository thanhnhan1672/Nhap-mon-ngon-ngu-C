#include <stdio.h>

int main () {
  int a[100];
  int n;
  printf ("nhap kich thuoc mang: ");
  scanf ("%d", &n);
   
  printf("nhap  so bang kich thuoc mang tu ban phim: ");
  
  for (int i = 0; i < n; i++) {
  
    scanf("%d", &a[i]);
   
  }
  int sum = 0;
  printf("cac so trong day mang: ");
  for (int i = 0; i < n; i++) {
 
    printf("%d ", a[i]);
   
    sum += a[i];
    
  }
    printf("\n");
    printf("tong cac so trong day mang: %d ", sum);
     
  return  0;
}
