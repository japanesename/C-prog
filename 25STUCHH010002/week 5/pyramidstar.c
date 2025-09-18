#include<stdio.h>
void main(){
    int count = 4;//
    for(int i = 1;i <= 5; i++){
        for(int j = 1;j <= count; j++){
            printf(" ");
            count -= 1;//
        }
        for (int k = 1; k <= i; k++){
            printf("*");

        }
        printf("\n");
    }
}