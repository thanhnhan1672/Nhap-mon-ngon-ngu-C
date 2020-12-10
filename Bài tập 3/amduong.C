#include <stdio.h>

int main(){	
// khai bao bien a
	int a ;
	// nhap bien a tren ban phim
		printf (" nhap a tren ban phim :",a);
	// kiem tra a la duong hay am
	scanf("%d" , &a);
	// khai bao bien a > 0 la so duong
if(a > 0) {
	printf("%d la so duong",a);
	//khai bao bien a = 0 la bang 0
if(a = 0) {
		printf("%d bang khong", a);
	}
	// neu a bang 0 thi bang khong
} else if(a == 0) {

		printf("%d bang khong", a);
	// nguoc lai ,neu a < 0 la so am
	 
} else {
	printf ("%d la so am",a);	
}

	
	
return 0;
}
