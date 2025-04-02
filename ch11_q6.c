//#include <stdio.h>

// Function to compute the sum of elements in the list
int sumElements(int arr[], int size) {
    if (size == 0) return -1;  // Return -1 if the list is empty

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Accumulate sum
    }

    return sum;
}

int main() {
    int arr[] = {5, 10, 15, 20};  // Example list
    int size = sizeof(arr) / sizeof(arr[0]);  // Get the number of elements

    int result = sumElements(arr, size);
    
    if (result == -1)
        printf("The list is empty.\n");
    else
        printf("The sum of elements is: %d\n", result);

    return 0;
}
