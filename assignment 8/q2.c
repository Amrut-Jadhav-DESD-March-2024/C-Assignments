/*
Write a function to accept student information from the user. Write another function to print
student’s information.
*/

#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[30];
	float marks;
	char add[10];

}std_t;

void accept_student(std_t *s);
void print_student(std_t s);

int main(void)
{

	std_t s1;
	accept_student(&s1);
	print_student(s1);

	return 0;

}
void accept_student(std_t *s)
{

	printf("Enter student details : (roll no, name, marks, add) : ");
	scanf("%d %s %f %s", &s->rollno, s->name, &s->marks, s->add);

}

void print_student(std_t s)
{

	printf("rollno = %d\n name = %s\n marks = %f\n add = %s", s.rollno, s.name, s.marks, s.add);

}















