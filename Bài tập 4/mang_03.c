#include<stdio.h>

int main()
{
    int n, a[100];
   
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang:\n");
    int i;
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Cac so trong mang la:");
    int chan;
    int le;
    for( i = 0; i < n; i++) {
        printf("%d ", a[i]);
        if(a[i] % 2 == 0) {
            chan =chan + a[i];
        }
        if(a[i] % 2 == 1) {
            le =le +  a[i];
        }
    }
    printf("\nTong cac so chan la: %d", chan);
    printf("\nTong cac so le la: %d\n", le);
    
    printf("\nCac so chan trong mang : ");
    int demchan;
    for( i = 0; i < n; i++) {
        if(a[i] % 2 == 0 && a[i] !=0) {
            printf("%d ", a[i]);
            demchan++;
        }
    }
    printf("\nCo tat ca %d so chan.\n", demchan);
int demle;
    printf("\nCac so le trong mang : ");
    for( i = 0; i < n; i++) {
        if(a[i] % 2 == 1 && a[i] !=0) {
            printf("%d ", a[i]);
            demle++;
        }
    }
    printf("\nCo tat ca %d so le.\n", demle);
int dem0;
    printf("\nCac so 0 trong mang la: ");
    for( i = 0; i < n; i++) {
        if(a[i] == 0 && a[i] !=0) {
            printf("%d ", a[i]);
            dem0++;
        }
    }
    printf("\nCo tat ca %d so 0.", dem0);
    return 0;
}
