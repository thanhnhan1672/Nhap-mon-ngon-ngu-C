#include <stdio.h>

int main(){	
		// khai bao bien n
	int n ;
		// nhap bien n tren ban phim
		printf (" nhap n tren ban phim :",n);
		
		// kiem tra n la chan hay le
	scanf("%d" , &n);
	
		// khai bao bien n bang khong
	 if(n  == 0) {
	printf("%d bang khong",n );
} 
		// neu n chia het cho 2 la so chan
else if(n % 2 == 0) {
	printf("%d la so chan", n);	
}
else{
 
 		// neu n khong chia het cho 2 ,la so le
	printf("%d la so le", n);
}
	
return 0;
}
