#include<stdio.h>
void main(){
    int inp,evencount = 0,oddcount = 0;
    printf("\n Input a number to ad dupto");
    scanf("%d", &inp);

    for (int i = 1; i <= inp; i++){

        if (i % 2 == 0){
            evencount = evencount + i;
        } else oddcount = oddcount + i;
    }

    printf("\nAddition of even numbers: %d\n Addition of odd numbers: %d", evencount, oddcount);
}