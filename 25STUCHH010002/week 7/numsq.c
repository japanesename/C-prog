#include<stdio.h>
long int square(int);

void main(){
long int in_value;
printf("\n Input a value to find the square:");
scanf("%ld", &in_value);
printf("\n The square of %ld is %ld\n",in_value, square(in_value));
}

long int square(int square){
return square*square;
}
