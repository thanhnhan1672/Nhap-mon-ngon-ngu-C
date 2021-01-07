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
