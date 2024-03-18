/*
Write a function to accept array elements from the user. Write another function to print array
elements.
*/


#include <stdio.h>


void accept_array_elements(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


void print_array_elements(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    
    accept_array_elements(arr, size);

    
    print_array_elements(arr, size);

    return 0;
}

