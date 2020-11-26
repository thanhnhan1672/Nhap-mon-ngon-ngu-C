#include <stdio.h>
int main(void)
{
	//khai bao bien a,b kieu int
int a,b;
	a = 3;
	b = 5;
	// khai bao bien tong,hieu,tich,thuong kieu int
	int tong, hieu, tich;
	// khai bao bien thuong va ap dung ep kieu
	double thuong;
	// hien thi bien tong tich thuong theo cac dinh dang da cho
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)a / b;
	printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
	getchar();
	return 0;
}
