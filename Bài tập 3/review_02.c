#include<stdio.h>
int main (){
    int a, b;
        printf("nhap a tu ban phim = ");
       
    scanf("%d", &a);
        printf("nhap b tu ban phim = ");
        
    scanf("%d", &b);
    for (int i = a; i <= b; i++) {
        if (i == 1){
            printf("one\n");        
        }else if (i == 2){
            printf("two\n");
        }else if (i == 3){
            printf("three\n");
        }else if (i == 4){
            printf("four\n");
        }else if (i == 5){
            printf("five\n");
        }else if (i == 6){
            printf("six\n");
        }else if (i == 7){
            printf("seven\n");
        }else if (i == 8){
            printf("eight\n");
        }else if (i == 9){
            printf("nine\n");
        }if (i % 2 == 0 && i > 9){
            printf("even\n");
        }else if (i % 2 == 1 && i > 9){
            printf("odd\n");       
        }
    }
    return 0; 
}
