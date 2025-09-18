#include<stdio.h>

void main(){
int temp, total;
printf("\nInput a digit:");
scanf("%d", &temp);
total = 0;
	for (int i = 0;i < temp;i/1){
		total = total + temp%10;
		temp = temp / 10;
	}
printf("\nSum of digits is %d\n", total);
}
