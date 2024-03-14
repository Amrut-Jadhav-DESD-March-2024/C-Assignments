#include<stdio.h>

int main(){

    int n1;
	int n2;
	int sum;
	int difference;
	int multiply;
  
	printf("Enter num1: ");
	scanf("%d", &n1);
	printf("Enter num2 :");
	scanf("%d", &n2);

	sum = n1+n2;
	printf("sum : %d \n", sum);

	difference = n1-n2;
	printf("diff : %d \n", difference);

	multiply = n1*n2;
	printf("multiply %d \n", multiply);

}
