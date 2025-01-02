#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
    }

    for (int i = 'A'; i <= 'E'; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}