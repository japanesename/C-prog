#include<stdio.h>

void main(){
char a;
printf("\nInput a character: \n");
scanf("%c", &a);

if (a >= '0' && a<= '9'){
printf("\n You entered a number\n");
}
else {
printf("\n you didnt enterr a digit\n");
}

}
