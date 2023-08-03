#include <stdio.h>
#include <math.h>
#include <string.h>

// HELLO WORLD test program written by Arthur Theuer (2023)

double add(double n1, double n2)
{
    double sum;
    sum = n1 + n2;
    return sum;
}


int main()
{
    printf("Hello World!\n");

    int a = 5;
    int b = 7;
    int c;

    c = a+b;
    printf("The sum of a=%d and b=%d is c=%d.\n",a,b,c);
    
    if (c == 0) {
        printf("c is 0.\n");
    } else if (c % 2 == 0)
    {
        printf("c is even.\n");
    } else
    {
        printf("c is odd.\n");
    }

    c = a-b;
    printf("The difference of a=%d and b=%d is c=%d.\n",a,b,c);

    c = a*b;
    printf("The product of a=%d and b=%d is c=%d.\n",a, b,c);

    c = a/b;
    printf("The quotient of a=%d and b=%d is c=%d.\n",a,b,c);
    c = a%b;
    printf("The remainder of a=%d and b=%d is c=%d.\n",a,b,c);
    a++;
    printf("The new a is %d.\n",a);

    int i;

    for (i=2;i<=10;i+=2)
    {
    printf("%d\n",i);
    }

    double arr[5];
    
    for (i=0; i<5; i++)
    {
        printf("%f\n",arr[i]);
    }
    
    double j=14.3;
    double k=17.7;

    printf("memory j: %p, memory k: %p\n",&j,&k);

    double* pt;
    pt = &j;

    printf("pointer pt value: %f, pointer pt address: %p\n",*pt,&pt);

    char hello[]="Hello";
    char world[]={'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char loud[]="HELLO";

    printf("%s %s\n",hello,world);
    printf("length of hello: %lu\n",strlen(hello));
    printf("loud vs hello: %d, loud vs world: %d\n",strcmp(loud,hello),strcmp(loud,world));

    double sum=add(j,k);

    printf("The sum of j+k=%f",sum);

    return 0;
}
