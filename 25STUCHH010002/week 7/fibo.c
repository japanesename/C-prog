#include<stdio.h>
int fibo(int, int, int);//terms, num1, num2
void main(){
int in_value;
printf("Input number of fibonacci terms to print:");
scanf("%d",&in_value);
int num1 = 0,num2 = 1;
fibo(in_value, num1, num2);
}

int fibo(int a, int num1, int num2){
	if (a != 0){
		int next = num2 + num1;
		printf("%d ",num1);
		num1=num2;
		num2=next;
		a--;
		fibo(a, num1, num2);
	}
//   in_value, 1, 2, 1
}
