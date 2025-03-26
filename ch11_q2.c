//Recursive function
#include <stdio.h>

// Recursive function to check if x is in the list
int search_recursive(int arr[], int size, int x) {
    if (size == 0)  // Base case: empty array
        return 0;
    if (arr[size - 1] == x)  // Check last element
        return 1;
    return search_recursive(arr, size - 1, x);  // Recursive call with reduced size
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int x = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (search_recursive(arr, size, x))
        printf("Element %d found (recursive).\n", x);
    else
        printf("Element %d not found (recursive).\n", x);

    return 0;
}
//--------------------------------------------------------------------------------------------------------//
//Iterative function
//#include <stdio.h>

// Iterative function to check if x is in the list
int search_iterative(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x)
            return 1;  // Element found
    }
    return 0;  // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int x = 6;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (search_iterative(arr, size, x))
        printf("Element %d found (iterative).\n", x);
    else
        printf("Element %d not found (iterative).\n", x);

    return 0;
}

