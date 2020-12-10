#include <stdio.h>

int main(){	
// khai bao bien a
	int a ;
	// nhap bien a tren ban phim
		printf (" nhap a tren ban phim :",a);
	// kiem tra a la duong hay am
	scanf("%d" , &a);
	// khai bao bien a >= 0 la so khong am
	if(a >= 0) {
	printf("%d la so khong am",a);
	// nguoc lai ,neu a < 0 la so am
	} else {
	
	printf ("%d la so am",a);
}
	
	
return 0;
}
