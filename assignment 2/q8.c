#include<stdio.h>
int main()
{
	float quantity, amount, discount=0, total_amount;
	
	printf("Enter the quantity : ");
	scanf("%f",&quantity);

	if(quantity <= 30)
	{
		amount = quantity * 5;
		printf("\nThe total price is %.2f\n",amount);
	}

	else if(quantity >= 30 && quantity <=50)
	{
		amount = quantity * 5;
		discount = amount * 0.1;
		total_amount = amount - discount;
		printf("The final price after 10 percent discount is %.2f\n",total_amount);
	}
		

	else
	{
		amount = quantity * 5;
		discount = amount * 0.15;
		total_amount = amount - discount;
		printf("The final price after 15 percent discount is %.2f\n",total_amount);
	}

	return 0;
}
