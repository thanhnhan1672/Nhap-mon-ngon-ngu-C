#include<stdio.h>
int main (){
	printf ("Cac so le dc in ra :");
	
	//cho gia tri bat dau tu 1 va ket thuc o 20 va tang dan 1 gia tri
for (int i = 1; i <= 20; i++) {

	//chuong trinh dc xuat ra voi cac gia tri la so le 
	// ! la toan tu khac . nen dong lenh nay co nghia khi xuat ra se ko co 5, 11,15

	if (i%2 !=0)
    if (i != 5 && i != 11 && i != 15){
       printf("%d ", i);
   
    }
}
    return 0;
}
