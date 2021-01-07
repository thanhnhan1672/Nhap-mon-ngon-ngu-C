#include<stdio.h>
int main () {
    printf (" === in bang cuu chuong ra man hinh ===\n"); 
    for (int a = 2; a < 10; a++) { 
        printf ("        -- bang cuu chuong %d --\n", a);
        for (int n = 1; n <= 10; n++) {    
        printf ("               %d x %d = %d\n", a, n, a * n);       
    }
    }
    return 0;
}
// khong dung for
#include<stdio.h>
int main () {
	
	printf("Bang cuu chuong");
	int n;
	n = 2;
	printf("bang 2\n");
	printf(" 2*1 =%d\n 2*2 = %d\n 2*3 =%d\n",n*1,n*2,n*3);
	n = 3;
	printf("bang 3\n");
	printf(" 3*1 =%d\n 3*2 = %d\n 3*3 =%d\n",n*1,n*2,n*3);
	n = 4;
	printf("bang 4\n");
	printf(" 4*1 =%d\n 4*2 = %d\n 4*3 =%d\n",n*1,n*2,n*3);
	n = 5;
	printf("bang 5\n");
	printf(" 5*1 =%d\n 5*2 = %d\n 5*3 =%d\n",n*1,n*2,n*3);
	
	return 0;
	}
