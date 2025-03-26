#include <stdio.h>

// Recursive function to find the largest element in the list
int Largest(int arr[], int size) {
    // Base case: If the list is empty, return -1
    if (size == 0) return -1;

    // Base case: If there's only one element, return it
    if (size == 1) return arr[0];

    // Recursive step: Get the largest element in the remaining list
    int maxRest = Largest(arr, size - 1);

    // Compare the last element with the largest of the rest
    return (arr[size - 1] > maxRest) ? arr[size - 1] : maxRest;
}

int main() {
    int arr[] = {7, 2, 9, 4, 10, 3};  // Example list
    int size = sizeof(arr) / sizeof(arr[0]);  // Get the number of elements

    int result = Largest(arr, size);
    
    if (result == -1)
        printf("The list is empty.\n");
    else
        printf("The largest element is: %d\n", result);

    return 0;
}
