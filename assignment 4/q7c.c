/*
Write a function to calculate sum and product into a single function.
*/

#include <stdio.h>
int solve(int *a, int *b){
    int temp = *a + *b;
    *b = *a - *b;
    *a = temp;
}
int main(){
    int a = 5, b = 8;
    solve(&a, &b);
    printf("a + b = %d and a - b = %d", a, b);
}
