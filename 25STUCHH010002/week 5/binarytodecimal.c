#include<stdio.h>
void main(){
int in_value,option;
printf("\n Enter a value:");
scanf("%d", &in_value);
printf("1.Convert to hexadecimal\n2.Convert to binary");
scanf("%d", &option)

switch(option){

case 1:{
printf("Value in hexadecimal is: %x", in_value);
break;
}

case 2:{
int rem;
	while(in_value != 0){
		rem = in_value % 2;
		rem
	}
break;
}
}
}
