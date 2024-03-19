/*
Write a function to print Pascal triangle of given number of rows.
*/

#include <stdio.h> 

int main() {
    int no_row, c = 1, col, i, j; 

    
    printf("number of rows: ");
    scanf("%d", &no_row); 

    
    for (i = 0; i < no_row; i++) {
        
        for (col = 1; col <= no_row - i; col++)
            printf("  ");

        
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) 
                c = 1;
            else
                c = c * (i - j + 1) / j; 
            printf("% 4d", c); 
        }

        printf("\n"); 
    }

    return 0; 
}


