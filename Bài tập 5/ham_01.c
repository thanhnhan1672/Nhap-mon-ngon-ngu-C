#include <stdio.h>

int sum() {
	int a, b,c;
  int sum = 0;
  sum = a + b + c;
  return sum;
}
  void tong (int a,int b,int c){
    
    printf("tong cua a,b,c  = %d ", a + b + c );

  }
int main () {
  int a,b,c;
	printf("Nhap a =: ");
	scanf("%d",&a);
	printf("Nhap b =: ");
	scanf("%d",&b);
  printf ("Nhap c = :");
  scanf("%d",&c);
  tong ( a,b,c);
	printf("\ntong cua a,b,c = %d",sum (a,b,c) );
	
	return 0;
	}
