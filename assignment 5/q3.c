/*
Write a function to reverse the array elements.
*/


#include <stdio.h>


void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    
    while (start < end) {
        
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        
        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

   
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

  
    reverse_array(arr, size);

   
    printf("Reversed array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


		 	








