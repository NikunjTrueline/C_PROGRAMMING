#include <stdio.h>

/*

Patterns.

1)Row
2)column

*
* *
* * *
* * * *
* * * * *

*/

/*
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

*/

int main()
{

    /*
            *
          * *
        * * *
      * * * *
    * * * * *

    */
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k < (5 - 1); k++)
        {
            printf(" ");
        }

        for (int j = 1; j < i; j++)
        {
            printf(" *");
        }

    }
    printf("\n");
    
}