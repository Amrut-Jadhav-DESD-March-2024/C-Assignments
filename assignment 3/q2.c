#include<stdio.h>

int main(void)
{

  int n;
  int i = 1;


  printf("Enter the input :");
  scanf("%d", &n);

 
  printf("output :\n");
  while(i <= 10){
        
		printf( "%d * %d = %d\n", n,i, n * i);
		i++;
       }





}
