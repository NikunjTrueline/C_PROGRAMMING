#include <stdio.h>

int main()
{

    int a[5];

    int c;
    printf("Enter the value of fisrt array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    printf("The  first array number is ascending order");

    for (int i = 0; i < 5; i++)
    {
        printf(" %d,", a[i]);
    }
}