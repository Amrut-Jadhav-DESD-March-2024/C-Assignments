#include<stdio.h>

int main(void)
{

   int num;
   int i = 2;
   

   printf("Enter a number");
   scanf("%d", &num);

   while(num > 1)
   {
	 
	   if(num % i ==0)
	   {

			printf("*%d",i);
			
			num = num/i;
	   }
	   else
	   {
//          i++;
	   }
   }

}
