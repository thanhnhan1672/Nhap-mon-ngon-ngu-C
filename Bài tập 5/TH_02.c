#include<stdio.h>
int main(){
		int S = 0;
	 int n;
	 printf(" nhap gia tri n:");
	 scanf("%d",&n); 
	 printf("S=");
	 for (int i = 1; i <= n ;i++){
     
	 	S = S + i;
	 printf (" +%d", i);
	 }
	 printf (" = %d", S);
	return 0;
	
}
