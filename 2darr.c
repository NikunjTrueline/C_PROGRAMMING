#include <stdio.h>

/*
Multi-dimensional array.

syntax :

        data-type arr-name[row][col]


*/

int main()
{

    int arr1[3][3];

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Element [%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    int sum1 = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
            // sum1 += arr1[i][j];
        }
        printf("\n");
    }

    int arr2[3][3];
    int x, y;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("Enter Element [%d][%d]:", x, y);
            scanf("%d", &arr2[x][y]);
        }
    }

    int sum2 = 0;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d\t", arr2[x][y]);
            // sum2 += arr2[x][y];
        }
        printf("\n");
    }

    printf("-----------------------------------------\n");

    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {

            printf("%d\t", arr1[m][n] + arr2[m][n]);
        }
        printf("\n");
    }
}