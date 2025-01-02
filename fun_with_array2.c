#include <stdio.h>

int display(int array[2][2]);

int main()
{

    int array[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    display(array);
}

int display(int array[2][2])
{

    printf("--------------------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", array[i][j]);
        }
    }
}