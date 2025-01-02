#include <stdio.h>

int main()
{
    int row;
    printf("Enter the row ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j == 0 || i + j == row / 2 || i - j == row / 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}