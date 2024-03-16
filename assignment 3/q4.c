#include<stdio.h>

int main(void)
{

   int num;
   int i = 1;
   int fact = 1;
   
   printf("Enter a number : ");
   scanf("%d", &num);

   while(i <= num)
   {
		fact = fact*i;
		i++;

   }
   printf("Factorial of %d is : %d", num, fact);

}
