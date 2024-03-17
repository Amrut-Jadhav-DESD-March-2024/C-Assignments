#include<stdio.h>
int main()
{
	int year;

	printf("Enter the year : ");
	scanf("%d",&year);

	
	if((year%4)==0)
			printf("The %d is leap year and it has 366 days\n",year);
	
	else if((year%400)==0)
     	    printf("The %d is leap year and it has 366 days\n",year);
  	
	else
 		printf("%d is a not leap year and hence it has 365 days\n",year);

	//Using logical operator

	if(((year%4)==0) || ((year%400)==0 && (year%100) != 0))
			printf("The %d is leap year and it has 366 days\n",year);

	else
 		printf("%d is a not leap year and hence it has 365 days\n",year);

	//Using conditional operator
	int result;
	result = ((year%4)==0)?



return 0;
}
