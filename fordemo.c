#include <stdio.h>
/*
    for(initialization;condition;updation)
    {
        //statement
    }

*/

int main()
{
    int i, n;
    /*
        for (i = 1; i <= 10; i++)
        {
            printf("%d\n", i);
        }
        */

    // printf("Enter Number.");
    // scanf("%d", &n);
    /*for (i = 0; i <= 255; i++)
    {
        // printf("%d X %d = %d\n", n, i, (n * i));
        printf("%c = %d\n", i, i);
    }
    */

    for (i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d", i);
    }

    return 0;
}