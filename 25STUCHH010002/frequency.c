#include<stdio.h>
void main(){

long int input;
int freq1=0,freq2=0,freq3=0,freq4=0,freq5=0,freq6=0,freq7=0,freq8=0,freq9=0,freq0=0;
printf("\n INput a value and then the frequency of all the digits will be shown");
scanf("%ld", &input);

while(input != 0){
	if (input % 10 == 1){
		freq1 += 1;
		input /= 10;
	}
	else if (input % 10 == 2){
		freq2 += 1;
		input /= 10;
	}
	else if (input % 10 == 3){
		freq3 += 1;
		input /= 10;
	}
	else if (input % 10 == 4){
		freq4 += 1;
		input /= 10;
	}
	else if (input % 10 == 5){
		freq5 += 1;
		input /= 10;
	}
	else if (input % 10 == 6){
		freq6 += 1;
		input /= 10;
	}
	else if (input % 10 == 7){
		freq7 += 1;
		input /= 10;
	}
	else if (input % 10 == 8){
		freq8 += 1;
		input /= 10;
	}
	else if (input % 10 == 9){
		freq9 += 1;
		input /= 10;
	}
	else if (input % 10 == 0){
		freq0 += 1;
		input /= 10;
	}
}

printf("Frequency of 1 : %d\n", freq1);
printf("Frequency of 2 : %d\n", freq2);
printf("Frequency of 3 : %d\n", freq3);
printf("Frequency of 4 : %d\n", freq4);
printf("Frequency of 5 : %d\n", freq5);
printf("Frequency of 6 : %d\n", freq6);
printf("Frequency of 7 : %d\n", freq7);
printf("Frequency of 8 : %d\n", freq8);
printf("Frequency of 9 : %d\n", freq9);
printf("Frequency of 0 : %d\n", freq0);


}
