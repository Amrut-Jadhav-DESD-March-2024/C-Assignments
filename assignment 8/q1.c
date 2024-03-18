/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same...
*/


#include<stdio.h>

struct student
{

	int st_roll;
	char st_name[20];
	float st_marks;

};
//typedef struct student s1;
int main(void)
{

	struct student s1;
	printf("Enter the student data :\n");

	printf("Enter the roll no. of student :");
	scanf("%d", &s1.st_roll);

	printf("Enter the name of the student :");
	scanf("%s", &s1.st_name);

	printf("Enter the marks of the students :");
	scanf("%f", &s1.st_marks);
//	struct st s1 = {11, "Amrut", 89.20};
	printf("Roll no. is = %d \nName of the student is = %s\nMarks of the student is = %f:", s1.st_roll, s1.st_name, s1.st_marks);

}
