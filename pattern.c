#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (6 - i); j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    // int k = 15;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= (6 - i); j++)
    //     {
    //         printf(" %d", k);
    //         k--;
    //     }
    //     printf("\n");
    // }

    // int i, j, k;

    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= i; j++,k++)
    //     {
    //         printf(" %c", (char)(k + 64));
    //     }
    //     printf("\n");
    // }
}