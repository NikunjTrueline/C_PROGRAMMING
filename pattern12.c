// #include <stdio.h>

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {

//         for (int k = 5; k > i; k--)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= i * 2 - 1; j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }

#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i + j == 6 || j - i == 4 || i == 5)
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