#include<stdio.h>
void swapval(int, int);
void swapref(int *, int *);
void main(){
	int a,b,opt;
	printf("\n Enter two numbers to swap:");
	scanf("%d %d", &a, &b);
	printf("\n 1. Call by value 2. Call by reference 3. Both\n Enter your choice:");
	scanf("%d", &opt);
	switch(opt){
	
	case 1:{
	printf("************* Call by value *************\nValue of a: %d, Value of b: %d\n",a,b);
	swapval(a,b);
	printf("\nValue of a in MAIN: %d, Value of b in MAIN: %d\n",a,b);
	break;
	}//case1brac
	
	case 2:{
	printf("************* Call by reference *************\nValue of a: %d, Value of b: %d\n",a,b);
	swapref(&a,&b);
	printf("\nValue of a in MAIN: %d, Value of b in MAIN: %d\n",a,b);
	break;
	}//case2brac
	
	case 3:{
	printf("\n\n\n\n\n************* Call by value *************\nValue of a: %d, Value of b: %d\n",a,b);
	swapval(a,b);
	printf("\nValue of a in MAIN: %d, Value of b in MAIN: %d\n\n",a,b);
	
	printf("************* Call by reference *************\nValue of a: %d, Value of b: %d\n",a,b);
	swapref(&a,&b);
	printf("\nValue of a in MAIN: %d, Value of b in MAIN: %d\n",a,b);
	break;
	}//case3brac
	
	default:
	printf("Invalud input");	
	}
}

void swapval(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapref(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
