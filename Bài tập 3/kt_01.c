#include <stdio.h>
int main()
{
	int a, n; // khai bao bien
	do{
		// nhap vao bang cuu chuong muon biet
	printf("Nhap bang cuu chuong: "); 
	
	scanf("%d", &n);	
	}
		// while kiem tra dieu kien
	while(n<1 || n>9); 
		//  neu a >=1 , a<10 thi chuong trinh se chay 
		// cho gia tri bat dau tu >= 1 den <11 voi gia tri tang dan
	for(a>=1; a<11; a++)
		printf("%d x %d = %d\n", n, a, a*n);
	return 0;
}
