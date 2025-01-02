#include <stdio.h>

/*
    syntax:

    for(intializationl;condition;updation) // outer loop / row
    {
        statement;

        for(intializationl;condition;updation) //inner loop/col
        {
            statement;

        }
        statement;
    }


*/

void main()
{
    int i, j, sp;
    /*
        for (i = 2; i <= 7; i++)
        {
            for (j = 1; j <= 10; j++)
            {
                printf("%d X %d = %d\n", i, j, (i * j));
            }
        }
    */
    // for (i = 1; i <= 10; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (i = 1; i <= 10; i++)
    {
        for (sp = 1; sp <= 10 - i; sp++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }\
    
}