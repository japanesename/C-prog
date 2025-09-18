#include<stdio.h>
void main(){
int x;
switch (x){
case 1:
printf("\nJanuary has 31 days");
break;

case 2:

int y;
printf("\n Input the year:");
scanf("%d", &y);
y = y % 4;
if (y == 4)
printf("\nFebuary has 29 days");
else printf("Febuary has 28 days");
break;

case 3:
printf("\nMarch has 31 days");
break;

case 4:
printf("\nApril has 30 days");
break;

case 5:
printf("\nMay has 31 days");
break;

case 6:
printf("\nJune has 30 days");
break;

case 7:
printf("\nJuly has 31 days");
break;

case 8:
printf("\n August has 31 days");
break;

case 9:
printf("\n September has 31 days");
break;

case 10:
printf("\nOctober has 30 days");
break;

case 11:
printf("\nNovember has 30 days");
break;

case 12:
printf("\nDecember has 31 days");
break;

default:
printf("\nInput a correct month number");
break;
}
}
