#include <stdio.h>

int main()
{

    int array[5];
    int swap;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    printf("\nArray before shorting.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d    ", array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (array[i] > array[j])
            {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }

    printf("\n\nArray after shorting.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d    ", array[i]);
    }
}