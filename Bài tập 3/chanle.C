#include <stdio.h>

int main(){	
		// khai bao bien a
	int a ;
		// nhap bien a tren ban phim
		printf (" nhap a tren ban phim :",a);
		
		// kiem tra a la chan hay le
	scanf("%d" , &a);
	
		// khai bao bien a bang khong
	 if(a  == 0) {
	printf("%d bang khong",a );
} 
		// neu a chia het cho 2 la so chan
else if(a % 2 == 0) {
	printf("%d la so chan", a);	
}
else{
 
 		// neu a khong chia het cho 2 ,la so le
	printf("%d la so le", a);
}
	
return 0;
}
