#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ADVANCED PRINTING written by Arthur Theuer (2023)

int main()
{
    // EXERCISE 2.15:
    {
        int side1;
        int side2;

        printf("Enter the length of side 1 of a rectangle: ");
        scanf("%d", &side1);
        printf("Enter the length of side 2 of a rectangle: ");
        scanf("%d", &side2);

        for (int i = 0; i < side1; i++) {
            for (int j = 0; j < side2; j++) {
                printf("#");
            }
            printf("\n");
        }
    }

    // EXERCISE 2.16:
    {
        int h,i,j;

        printf("\nEnter the height of a pyramid (odd number): ");
        scanf("%d", &h);

        // Check if number really is odd:
        if (h % 2 == 0 || h < 1) {
            printf("You entered an invalid height!");
            return 0;
        }

        for (i = 0; i<h; i++) {
            // Leading white spaces:
            for (j = 0; j<h-i; j++) {
                printf(" ");
            }
            // Number of pyramid squares:
            for (j = 0; j<2*i+1; j++) {
                printf("#");
            }

            printf("\n");
        }

    }

    // EXERCISE 2.17:
    {
        char str[1000];

        printf("\nPlease enter a string to get the number of each vowel:  ");

        // Clear input buffer as there seems to be a problem with that:
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        // Then let user input string:
        fgets(str,1000,stdin);

        int counts[5] = {0,0,0,0,0};

        for (int i = 0; i < strlen(str); i++) {
            switch (tolower(str[i]))
            {
                case 'a': counts[0]++; break;
                case 'e': counts[1]++; break;
                case 'i': counts[2]++; break;
                case 'o': counts[3]++; break;
                case 'u': counts[4]++; break;
                default:  break;
            }
        }
        
        // Print result of counting as numbers:
        printf("\na: %d \ne: %d \ni: %d \no: %d \nu: %d\n",counts[0],counts[1],counts[2],counts[3],counts[4]);

    // EXERCISE 2.18:

        // Print result as bar plot:
        for (int j = 0; j < 5; j++) {
            // Labelling:
            if (j==0) {printf("\na: ");
            } else if (j==1) {printf("e: ");
            } else if (j==2) {printf("i: ");
            } else if (j==3) {printf("o: ");
            } else if (j==4) {printf("u: ");
            }

            // Bars:
            for (int k = 0; k < counts[j]; k++) {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
