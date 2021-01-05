#include<stdio.h>

int main() {
    int n, chan = 0, le = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            chan += i;
        if(i % 2 != 0)
            le += i;
    }
        printf("tong chan va le la: %d vs %d",chan, le);
}
