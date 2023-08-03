#include <stdio.h>
#include <stdbool.h>

// ARRAY MANIPULATION written by Arthur Theuer (2023)

int main()
{
    // EXERCISE 2.7:
    {
        bool three_flag = false;
        bool seven_flag = false;

        int arr[10] = {0,1,2,3,4,5,6,7,8,9};
        int i;

        // Set flags according to values of the array and print array:
        for(i = 0; i < 10; i++) {
            if (arr[i] == 3) {
                three_flag = true;
            } else if (arr[i] == 7) {
                seven_flag = true;
            }
            printf("_%d_", arr[i]);
        }

        printf("\n");

        // Print correct statement using the flags:
        if (three_flag==true && seven_flag==false) {
            printf("The array has at least one 3 in it, but no 7s.\n\n");
        } else if (three_flag==false && seven_flag==true) {
            printf("The array has at least one 7 in it, but no 3s.\n\n");
        } else if (three_flag==true && seven_flag==true){
            printf("The array contains 3s and 7s.\n\n");
        } else {
            printf("The array contains neither 3s nor 7s.\n\n");
        }
    }
    
    // EXERCISE 2.8:
    {
        int arr[10] = {0,1,2,3,4,5,6,7,8,9};

        // Print original array:
        for (int i = 0; i < 10; i++) {
            printf("_%d_", arr[i]);
        }

        printf("\n");

        // Modify array and print again:
        for (int i = 0; i < 10; i++) {
            if (arr[i] % 2 == 0) {
                arr[i] = 0;
            } else {
                arr[i] = 1;
            }
            printf("_%d_", arr[i]);
        }

        printf("\n");
    }

    // EXERCISE 2.9:
    {
        int arr[] = {5,7,8,6,4,9,1,0,54,12,7,9};
        int size = sizeof(arr) / sizeof(arr[0]);

        printf("\nSize of the tested array: %d",size);
    }

    return 0;
}
