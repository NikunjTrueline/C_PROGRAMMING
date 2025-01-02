#include <stdio.h>

int main()
{

    int a = 5;
    int b = 1;
    int c = 5;
    int d = 1;

    for (int i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (int j = 1; j <= a; j++)
            {
                printf(" ");
            }
            a--;
            for (int k = 1; k <= b; k++)
            {
                printf("* ");
            }
            b++;
        }
        else
        {
            for (int m = 1; m <= d; m++)
            {
                printf(" ");
            }
            d++;
            for (int n = 1; n <= c; n++)
            {
                printf("* ");
            }
            c--;
        }
        printf("\n");
    }
}