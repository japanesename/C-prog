#include<stdio.h>
long int sum();

void main(){
	printf("\n Enter two numbers to add");
	printf("\n Sum of two number is : %ld\n", sum());
	
}

long int sum(){
	long int a,b;
	scanf("%ld %ld", &a, &b);
return a+b;	
}
