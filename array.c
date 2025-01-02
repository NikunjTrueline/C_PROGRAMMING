#include <stdio.h>
/*
    Array : It is a name which is store at memory and stores multiple values of same types in a contigous memory.

    syntax:

        data-type arrayname[size];

        e.g

        int marks[5];

    -Array index starts with 0.

*/

/*
void main()
{
    // int arr1[5] = {10, 20, 30, 40, 50};
    int arr1[5]; // single dimension array.
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Element");
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr1[i]);
    }
}

*/

int main()
{

    int array[5];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    int array1[5];
    int array2[5];

    // printf("%d",array1[0]);

    //    for (int i = 0; i < 5; i++)
    //    {
    //     printf("%d\n",array1[i]);
    //    }

    int sum1 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a array element for array1: ");
        scanf("%d", &array1[i]);
        // sum1 += array1[i]; // sum1 = sum1+array[0]
    }

    int sum2 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a array element for array2: ");
        scanf("%d", &array2[i]);
        // sum2 += array2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("sum of %d and %d is %d\n", array1[i], array2[i], array1[i] + array2[i]);
    }
}