//Write a program to read a file character by character and display its content on screen.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;

	fptr = fopen("file1.txt", "r");

	if(fptr == NULL)
	{
		printf("Unable to open file.\n");
		printf("please check your file is exit or not.\n");
		exit(EXIT_FAILURE);
	}

	printf("File opened successfully\n");

	do
	{	
		ch = fgetc(fptr);
		putchar(ch);
    }while(ch != EOF);

	fclose(fptr);

	return 0;
}
