#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 4; k >= i; k--)
    //     {
    //         printf("  ");
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf(" *");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 1; k < i; k++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 1; k < i; k++)
    //     {
    //         printf(" ");
    //     }

    //     for (int J = 5; J >= i; J--)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 5; k > i; k--)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // int j = 9;
    // int k = j;

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = k; j >= 1; j--)
    //     {
    //         printf("*");
    //     }

    //     k = k - 2;
    //     printf("\n");
    // }

    int n = 16;
    int k = n;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = k; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        k = k / 2;
    }
}

/*

****************
********
****
**
*

*/