#include<stdio.h>
 int main() {
    int n, i, S = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    while (n != 0) {
        i = n % 10;
        S += i;
        n = n / 10;
    }
        printf("tong cac chu so cua n la: %d", S);
    return 0;
 }


#include<stdio.h>
 int main() {
 	int n = 123;
 	int s = 0;
 	int so ;
 	for(int i = 1; n > 0; i++)}
 		so = n % 10;
 		n = n / 10;
 		s = s + so;
 		{
 		printf("%d",s);
	 
 	return 0;
 	}
