#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// DYNAMIC ARRAYS written by Arthur Theuer (2023)

// Function for EXERCISE 2.20:
void swapElements(int arr[], int length, int i, int j) {
    if (i < 0 || i >= length || j < 0 || j >= length) {
        // Invalid indices, do nothing:
        return;
    }

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void rearrangeArray(int arr[], int length) {
    if (length <= 1) {
        // No rearrangement needed:
        return;
    }

    int lastElement = arr[length - 1];
    int lastElementIndex = length - 1;

    for (int i = 0; i < lastElementIndex; i++) {
        if (arr[i] > lastElement) {
            swapElements(arr, length, i, lastElementIndex);
            lastElementIndex--;
            i--; // Re-check the current index since we swapped elements
        }
    }
}


int main()
{
    // EXERCISE 2.19:
    {
        int n;
        printf("\nEnter the number of elements in the array: ");
        scanf("%d", &n);

        // Allocate memory for an array of integers of size n:
        int* arr = (int*)malloc(n * sizeof(int));

        if (arr == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        // Use the allocated memory for the array:
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }

        // Print the array elements:
        printf("Array elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");

        // Free the allocated memory as it is no longer needed:
        free(arr);
    }

    // EXERCISE 2.20:
    {
        int n;

        printf("\nEnter the number of elements in the array: ");
        scanf("%d", &n);

        // Allocate memory for an array of integers of size n:
        int* arr = (int*)malloc(n * sizeof(int));

        if (arr == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        // Let user fill the array;
        printf("Enter %d integers (press [ENTER] after every number):\n",n);
        for (int i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        
        // Print the array elements:
        printf("Array elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");


        int j, k;
        printf("Enter the indices j and k (separated by a space) to swap: ");
        scanf("%d %d", &j, &k);

        swapElements(arr, n, j, k);

        printf("Array after swapping elements at positions %d and %d:\n", j, k);
        for (int l = 0; l < n; l++) {
            printf("%d ", arr[l]);
        }

        printf("\n");
    }

    // EXERCISE 2.21:
    {
        int arr[] = {3, 4, 6, 42, 3, 4, 5};
        int length = sizeof(arr) / sizeof(arr[0]);

        printf("\nInput array: ");
        for (int i = 0; i < length; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");

        rearrangeArray(arr, length);

        printf("Output array: ");
        for (int i = 0; i < length; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }


    return 0;
}
