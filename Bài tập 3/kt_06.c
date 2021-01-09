#include<stdio.h>

int main ()
{
int h = 4;

// h = 4 4:4 hang
// hang 1 : 1 sao 3 khoang trang
// hang 2 : 3 sao 2 khoang trang
// hang 3 : 5 sang 1 khoang trang
// hang 4 : 7 sao 0 khoang trang
for(int i = 1; i <= h ;i++){
  for(int j = 1; j <=10 ; j++)
printf(" ");
for(int k = 1; k <=2 * i - 1;k++)
printf("*");
printf("\n");
}

// h = 3 3:3 hang
// hang 1 :1 sao 2 khoang trang
// hang 2 : 3 sao 1khoang trang
// hang 1 : 5 sao 0 khoang trang


// h = 2 2:2 hang
// hang 1: 1 sao 2 khoang trang
// hang 2 : 3 sao khong khoang trang



    return 0;
}
