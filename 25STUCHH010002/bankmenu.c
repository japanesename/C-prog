#include<stdio.h>
#define PIN 1234
void main(){
//values that arent used while inputting
double balance = 0;
int whilecheck = 1;

//values used while inputting
int pin,option,valinput;

do{
	printf("\n Welcome to ICFAI bank. Please enter PIN or enter 4 to quit\n>");
	scanf("%d", &pin);
	//when pin is 1234 enter the program
		if (pin == PIN){
				printf("\n Welcome to ICFAI bank. Choose a menu option ->\n 1.Withdraw\n2.Deposit\n3.Balance Enquiry\n4.Exit\n>");
				scanf("%d", &option);
		
		switch(option){
			case 1:{
				printf("\nEnter an amount to withdraw or enter 4 to quit\n>");
				scanf("%d", &valinput);
				if (valinput > balance){
				printf("\n You are too broke. Sorry");
				}
				else if (valinput == 4){
				whilecheck = 2;
				}
				else {
				balance -= valinput;
				printf("\nYou withdrew %d and have %lf left in your bank account\n",valinput, balance);
				}
				}//case1brac
				break;
			case 2:{
				printf("\n Enter an amount to deposit or enter 4 to quit\n>");
				scanf("%d", &valinput);
				if(valinput != 4){
				balance += valinput;
				printf("You deposit %d and have %lf left in your bank account\n",valinput, balance);
				}
				else{
				printf("Exiting...");
				}
				}//case2brac
				break;
			case 3:{
				printf("\n Your available balance is: %.2lf", balance);
				}//case3brac
				break;
			case 4:{
				printf("Exiting...");
				whilecheck = 0;
				}//case4brac
		
			}//switchbrac
		
		}//ifbrac
	
			
// Exit program before pin entered
	else if (pin == 4){
	printf("Exiting...\n");
	whilecheck = 2;
	
	}
	//incorrect pin no value change
	else{
	printf("Incorrect pin");
	}
}while(whilecheck == 1);//dobrac
}

