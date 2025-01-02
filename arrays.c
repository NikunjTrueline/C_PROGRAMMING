#include <stdio.h>

int main()
{

    int arr1[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element [%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }
}