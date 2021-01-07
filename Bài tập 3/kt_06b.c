#include<stdio.h>
 int main() {
    int h;
    printf("nhap h: ");
    scanf("%d", &h);
    for(int i  = 0; i < h-1; i++) {
        for(int j = 0; j < 2*h-1; j++) {
            if(j == (h-1)-i || j == (h-1)+i) {
                printf(" * ");
            } else printf("   ");
        }
        printf("\n");
    }
    for(int i = 0; i < 2*h-1; i++) {
        printf(" * ");
    }
     return 0;
 }
