#include<stdio.h>
void main(){
int in_value,check,count=0;
printf("\n Enter a number to check if it is prime or not:");
scanf("%d", &in_value);

for (int i = 1;i <= in_value;i++){
	if (in_value % i == 0){
		count++;
	}
}

if(count == 2) 
printf("\n Your number is prime.\n");
else 
printf("\n Number is not prime\n");

}
