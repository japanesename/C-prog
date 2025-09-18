#include<stdio.h>

void main(){
int a,b,c,d,e;
printf("Enter a 3 digit number: \n");
scanf("%d", &a);
b = (a%10);
c = (a/10)%10;
d = (a/10)/10;
e = b*100 + c *10 + d;
printf("The number in reverse is %d", e);

}
