#include<stdio.h>
void main(){
int num[5];
printf("Input 5 numbers");
for(int i = 0; i<=4; i++){
	scanf("%d", &num[i]);
}

int total = 0;

for(int i = 0; i<=4;i++){
	total = total + num[i];
}
printf("total = %d\n", total);
printf("avg = %d\n", total/5);
}
