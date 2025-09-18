#include<stdio.h>
void main(){
int a,b,c,out;
printf("\n Input 3 numbers:");
scanf("%d %d %d", &a, &b, &c);
out = (a>b? (a>c? a : c):(b>c? b : c));
printf("\n the largest number is %d\n", out);
}
