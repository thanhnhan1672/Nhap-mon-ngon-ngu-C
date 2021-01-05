#include<stdio.h>

int main() {
    int a, b, c;
    printf("nhap a: ");
        scanf("%d", &a);
    printf("nhap b: ");
        scanf("%d", &b);
    printf("nhap c: ");
        scanf("%d", &c);
    if((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (b + c > a) && (c + a > b)) {
        printf("\n%d %d %d la 3 canh cua 1 tam giac", a, b, c);
    } else 
        printf("Khong the nao tao thanh 1 tam giac!");
    return 0;
}
