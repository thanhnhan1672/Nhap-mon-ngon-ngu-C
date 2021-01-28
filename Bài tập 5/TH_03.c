lines (27 sloc)  531 Bytes
  
#include <stdio.h>
int max(int a, int b, int c) {
int lonnhat = 0;
  if (a > b && a > c) {
    lonnhat = a;
 
  }else if (a < b && b < c){
    lonnhat = c;
 
  }else{
    lonnhat = b;
  ;
  }
  return lonnhat;
}

int main () {
printf("nhap a = ");
int a;
scanf ("%d", &a);
printf("nhap b = ");
int b;
scanf ("%d", &b);
printf("nhap c = ");
int c;
scanf ("%d", &c);
printf("%d", max(a, b, c));
}
