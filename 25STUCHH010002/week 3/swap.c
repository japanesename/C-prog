#include<stdio.h>

void main(){
int a,b;
printf("\n Input two numbers:");
scanf("%d %d",&a, &b);
a = a+b;
b = a-b;
a = a-b;
printf("\n %d is a and %d is b\n", a, b);
}
