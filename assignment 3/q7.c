#include<stdio.h>

int main(void)
{

   int num;
   int i = 1;
//   int j = 1;
//:   int m;
   int k;
   int f1;
   int f2;

   printf("Enter a number :");
   scanf("%d", &num);

   while(i * i <= num)
   {
        
       if(num % i*i == 0)
	   {
	       f1 = i;
		   f2 = num/i;
	   	   k = f1 * f2;  
           printf("%d * %d = %d\n", f1,f2,k);

	   }
	   i++;
//	   j++;

   }

}
