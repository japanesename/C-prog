#include<stdio.h>

int main(){
	signed int a,b,tempa,tempb;
	printf("\n Input 2 values for a and b");
	scanf("\n %d %d", &tempa, &tempb);
	a = tempa;
	b = tempb;

	printf("\n Arithmatic operations on b and a:");
	printf("\n a + b = %d", a+b);
	printf("\n a - b = %d", a-b);
	printf("\n a * b = %d", a*b);
	printf("\n a / b = %d", a/b);
	printf("\n a %% b = %d", a % b);


	printf("\n Logical operations on b and a:");
	printf("\n a AND b = %d", a && b);
	printf("\n a OR b = %d", a || b);
	printf("\n NOT a = %d", !a);
	printf("\n NOT b = %d", !b);


	printf("\n Relational operations on b and a");
	printf("\n a < b = %d", a < b);
	printf("\n a > b = %d", a > b);
	printf("\n a <= b = %d", a <= b);
	printf("\n a >= b = %d", a >= b);
	printf("\n a == b = %d", a == b);
	printf("\n a != b = %d", a != b);


	printf("\n Assignment operations on b and a");
	printf("\n a / b = %d", a /= b);
	a = tempa;
	b = tempb;
	printf("\n a * b = %d", a *= b);
	a = tempa;
	b = tempb;
	printf("\n a %% b = %d", a %= b);
	a = tempa;
	b = tempb;
	printf("\n Incrementing a by b= %d", a += b);
	a = tempa;
	b = tempb;
	printf("\n Incrementing b by a= %d\n", b += a);
return 0;
}

