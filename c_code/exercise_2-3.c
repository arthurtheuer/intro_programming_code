#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// STRING MANIPULATION written by Arthur Theuer (2023)

int main()
{
    // EXERCISE 2.10:
    {
        char string[1000];

        printf("Please enter a word or sentence: ");
        fgets(string,1000,stdin);

        // strlen - 1 because it counts the trailing whitespace:
        printf("Length of your string: %d",(int)strlen(string)-1);

    // EXERCISE 2.11:

        int i, j, count = 0;
        char string_rev[1000];

        while (string[count] != '\0') {
            count++;
        }

        j = count-2;

        for (i = 0; i < count; i++) {
            string_rev[i] = string[j];
            j--;
        }

        printf("\nReverse of your string: %s",string_rev);
    }

    // EXERCISE 2.12:
    {
        char string1[1000];
        char string2[1000];

        printf("\nPlease enter a 1st string of a given length:  ");
        fgets(string1,1000,stdin);

        printf("Please enter a 2nd string of the same length: ");
        fgets(string2,1000,stdin);

        if (strlen(string1) != strlen(string2)) {
            printf("The strings have different lengths!");
            return 0;
        }

        int dist = 0;

        for (int i = 0; i < strlen(string1); i++) {
            if (string1[i] != string2[i]) {
                dist++;
            }
        }

        printf("Hamming distance of the two strings: %d",dist);
    }

    // EXERCISE 2.13 & 2.14 were skipped.


    return 0;
}
