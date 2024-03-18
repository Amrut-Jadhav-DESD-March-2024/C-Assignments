/*
Write a program to accept marks of five subjects, calculate its total and average.
*/

#include<stdio.h>

int main(void)
{

	float s1, s2, s3, s4, s5;
	float total, avg;

	printf("Enter the marks of the five subjects");
	scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);

	total = s1+s2+s3+s4+s5;
	printf("Enter the total marks = %.2f\n", total);

	avg = total/5;
	printf("Enter the average = %.2f", avg);


}
