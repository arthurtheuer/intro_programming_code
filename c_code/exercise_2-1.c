#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

// SMALL PROGRAMS written by Arthur Theuer (2023)

// Function for EXERCISE 2.2:
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main()
{
    // EXERCISE 2.1:
    {
        int n1 = 8;
        float n2 = 1.45;
        printf("The sum of n1 = %d and n2 = %f is c = %.3f.\n",n1,n2,(float)n1+n2);
    }

    // EXERCISE 2.2:
    {
        int int_a = 3;
        int int_b = 4;

        swap(&int_a,&int_b);
        printf("a=%d and b=%d.\n",int_a,int_b);
    }

    // EXERCISE 2.3:
    {
        int number;
        int three = 3;

        printf("\nEnter an integer number: ");
        scanf("%d", &number);

        double p = log10(number) / log10(three);

        printf("p=%f\n",p);

        // Check if p is an integer -> then input is a power of three
        if (p-(int)p == 0) {
            printf("Your number IS a power of three (3^%d).\n",(int)p);
        } else {
            printf("Your number IS NOT a power of three.\n");
        }
    }

    // EXERCISE 2.4:
    {
        int prime;
        int flag = 1;

        printf("\nEnter an integer number: ");
        scanf("%d", &prime);

        double root = sqrt(prime);

        for (int i = 2; i <= root; i++) {
            if (prime % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf("%d IS a prime number.\n", prime);
        } else {
            printf("%d IS NOT a prime number.\n", prime);
        }
    }

    // EXERCISE 2.5:
    {
        int n;
        printf("\nEnter a positive integer number: ");
        scanf("%d", &n);

        int im2 = 0;
        int im1 = 1;
        int new;

        for (int i = 0; i <= n; i++) {
            new = im1 + im2;

            im2 = im1;
            im1 = new;
        }

        printf ("F_%d of the Fibonacci series is %d.\n",n,new);
    }

    // EXERCISE 2.6 (only written for one number):
    {
        int normal;
        int weird;
        printf("\nEnter an integer number: ");
        scanf("%d", &normal);


        if (normal >= 0 && normal <= 10 && normal != 5 && normal != 7) {
            weird = 0;
        } else {
            weird = normal;
        }

        printf("The number %d = %d.",normal, weird);
    }
    
    return 0;
}
