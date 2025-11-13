#include<stdio.h>
#include<string.h>

struct Student{
	int rollno;
	char name[50];
	int age;
	char address[50];
	float marks;
};

int main(){
int in_value;
printf("Input number of students to record:");
scanf("%d",&in_value);
struct Student studentlist[in_value];
	for (int i = 0; i<in_value;i++){
		printf("\nStudent %d info",i);
		printf("\nEnter roll no:");
		scanf("%d", &studentlist[i].rollno);
		
		printf("\nEnter name:");
		scanf("%s", studentlist[i].name);
		
		printf("\nEnter age:");
		scanf("%d", &studentlist[i].age);
		
		printf("\nEnter address:");
		scanf("%s", studentlist[i].address);
		
		printf("\nEnter marks:");
		scanf("%f", &studentlist[i].marks);												
	}//for

	// Print student information
	printf("\n* * * * * * * * Student Information: * * * * * * * * \n");
	printf("\n ");
	printf("\nRollNo\tName\t\tAge\tAddress\t\t\tMarks");
	for (int i = 0; i < in_value; i++) {
	printf("\n%d\t",studentlist[i].rollno);
	printf("%s\t\t", studentlist[i].name);
	printf("%d\t", studentlist[i].age);
	printf("%s\t\t", studentlist[i].address);
	printf("%.2f", studentlist[i].marks);
	}
	printf("\n");
return 0;
}
