#include<stdio.h>
int main(){
		int tinh = 0;
	 int n;
	 printf(" nhap gia tri n:");
	 scanf("%d",&n); 
	 printf("S=");
	 for (int i = 1; i <= n ;i++){
     
	 	tinh = tinh + i;
	 printf (" +%d", i);
	 }
	 printf (" = %d", tinh);
	return 0;
	
}
