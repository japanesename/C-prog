#include<stdio.h>


void main(){

int rows,cols;
printf("Enter number of rows:");
scanf("%d", &rows);
printf("Enter number of columns:");
scanf("%d", &cols);
int a[rows][cols]; 

//take input
printf("Enter values ->");
for (int i = 0;i < rows;i++){
	for (int j = 0;j < cols;j++){
		printf(">");
		scanf("%d", &a[i][j]);
}
}

//print
for (int i = 0;i < rows;i++){
	for (int j = 0;j < cols;j++){
		printf(" %4d", a[i][j]);
}
		printf("\n");
}

//transpose
printf("\n Transpose:\n");
for (int i = 0;i < cols;i++){
	for (int j = 0;j < rows;j++){
		printf(" %4d", a[j][i]);
}
		printf("\n");
}

}
