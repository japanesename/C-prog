#include<stdio.h>
void main(){
int a = 0,x,y;
char z;

do {
printf("\nEnter an operation to perform");
printf("\n Addition(+)");
printf("\n Subtraction(-)");
printf("\n Multiply(*)");
printf("\n Divide(/)");
printf("\n Give remainder of inputs(\%)");
printf("\n Exit");
switch (z){

case '+':
printf("Input both numbers:");
scanf("%d %d", &x, &y);
printf("Addition of %d and %d = %d"x,y,x+y);
break;

case '0':
printf("Exiting...");
a = 1;
break;
}
} while (a = 0)
}
// vuhfeiugrhgighribhighd

#include <stdio.h>

int main() {
char op;
int num1, num2;

printf("Enter an operator (+, -, *, /): ");
scanf("%c", &op);
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

switch (op) {
case '+':
    printf("Result: %d\n", num1 + num2);
    break;
case '-':
    printf("Result: %d\n", num1 - num2);
    break;
case '*':
    printf("Result: %d\n", num1 * num2);
    break;
case '/':
    if (num2 != 0)
        printf("Result: %d\n", num1 / num2);
    else
        printf("Error: Division by zero!\n");
    break;
case '%':
default:
    printf("Invalid operator!\n");
}

return 0;
}

