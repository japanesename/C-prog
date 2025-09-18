#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>

int main(void)
{
  int counter;
  int counter2;
  int counter3;
  int counter4;
  int cash=1000;
  int bet=5;
  int numO;
  int numT;
  int numTh;
  int jackWin;
  int yesNo;
  
  srand(time(NULL));
  printf("Welcome to the Slot Machines! You start with $1000. The bet is $5.\n");
  printf("Match two numbers to win $5.\n");
  printf("Match all three numbers to win $100 times the number shown.\n");
  printf("\n");
do
{
	for(counter2=1; counter2<=5; counter2++)
	{
		numO=rand();
		numT=rand();
		numTh=rand();
	}
	for(counter=1; counter<=5; counter++)
	{
	numO=2+numO%5;
	numT=1+numT%6;
	numTh=3+numTh%4;
	printf("Current Balance=$%4d", cash);
	printf("	Spin #%2d: ", counter);
	printf("%d %d %d 	", numO, numT, numTh);
	if((numO==numT)&&(numT==numTh)&&(numTh==numO))
	{
		cash-=bet;
		jackWin=100*numO;
		cash+=jackWin;
		printf("Jackpot! You win $%d!\n", jackWin);
	}
	if((numO!=numT)&&(numT!=numTh)&&(numTh!=numO))
	{
	cash-=bet;
	printf("Sorry, no matches.\n");
	}
	if(((numO==numT)&&(numT!=numTh))||((numTh==numO)&&(numO!=numT))||((numT==numTh)&&(numTh!=numO)))
	{
		printf("Match! You win $5\n");
	}
}
printf("Would you like to spin five more times (Yes=1, No=0)? ");
scanf("%d", &yesNo);
} while (toupper(yesNo)==1);
printf("Game over. Your final balance was $%d.", cash);
return 0;
}
