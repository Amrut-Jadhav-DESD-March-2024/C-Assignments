/*
   Q3.Write a program to accept a number and
		a.Calculate sum of digits of integer
		Input: 9362
		Output: 9 + 3 + 6 + 2 = 20
*/


#include<stdio.h>
int main()
{
	int num ,d,c,b,a;
	
	printf("Enter the number : ");
	scanf("%d",&num);

    int	temp = num ;
	
	d = num % 10 ;
	num = num /10;

	c = num % 10 ;
	num = num /10;

	b = num % 10 ;
	num = num /10;

	a = num ;
/*

	while(num != 0)
		{
			rem = num % 10;
			quotient = num/10;
			res =res + rem;
		}
*/

	printf("Input : %d\n",temp);
	printf("%d + %d + %d + %d = %d\n",a,b,c,d,(a+b+c+d));
return 0;
}
