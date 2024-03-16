#include<stdio.h>

int main(void)
{

   int num;
   int i = 1;

   printf("Enter a number :");
   scanf("%d", &num);

   printf("factors of given number are:\n");

   while(i <= num/2)
   {

		if(num % i == 0)  
        {  
            printf("%d\n", i);  
        }
		i++;
   }
   

}
