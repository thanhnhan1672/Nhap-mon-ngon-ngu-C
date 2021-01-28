#include<stdio.h>

int LN_n(int n, int a[100])
{
    int MAX = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > MAX) {
            MAX = a[i];
        }
    }
    return MAX;
}
int Giaithua(int n, int a[100])
{
    int S = 1;
    for (int i = 1; i <= n; i++)
    {
        S *= i;
    }
    return S;
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("So lon nhat la: %d",LN_n(n, a));
    printf("\nTong giai thua la: %d", Giaithua(n, a));
}
