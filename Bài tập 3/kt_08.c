#include<stdio.h>

int main() {
    float a, b;
    printf("nhap a: ");
    scanf("%f", &a);
    printf("nhap b: ");
    scanf("%f", &b);
        if(a * b >= 0) {
            printf("%.0f va %.0f cung dau voi nhau!", a, b);
        } else printf("%.0f va %.0f khac dau nhau!", a, b);
    return 0;
}
