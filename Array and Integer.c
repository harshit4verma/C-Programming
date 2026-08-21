#include <stdio.h>

int main() {
    int size;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    // Input array elements from the user
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Assume the first element is the maximum
    int max = array[0];

    // Compare all elements with the assumed maximum
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Print the maximum element found
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
