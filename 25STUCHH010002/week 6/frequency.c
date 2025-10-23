#include<stdio.h>
void main(){
int frequency, count = 0;
long int in_value;

printf("\nInput a number to check:");
scanf("%ld", &in_value);
printf("\nInput a digit to check:");
scanf("%d", &frequency);

for(long int i = in_value;i>0;i/=10){
	if(i % 10 == frequency){
		count++;
	}
}
printf("\nThe number %d has occoured %d times in %ld", frequency, count, in_value);
}
