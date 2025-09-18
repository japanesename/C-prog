#include<stdio.h>
void main(){
int num1,num2,num3,out;
printf("\n Input 3 numbers:");
scanf("%d %d %d", &num1, &num2, &num3);

if (num1 > num2){
	if (num1 > num3){
		printf("\nLargest number is num 1, %d\n", num1);
	}
	else printf("Largest number is num 3, %d\n", num3);
}

else if (num2 > num3){
		printf("\nLargest number is num 2, %d\n", num2);
	}
	else printf("Largest number is num 3, %d\n", num3);
}


