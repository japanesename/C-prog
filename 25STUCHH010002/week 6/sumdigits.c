#include<stdio.h>
void main(){
long int in_value;
int sum = 0;
printf("\n Input a value, sum of its digits will be output:");
scanf("%ld", &in_value);

for(long int i = in_value; i > 0; i/=10){
	sum += i%10;
}
printf("\n Sum of digits is %d", sum);
}
