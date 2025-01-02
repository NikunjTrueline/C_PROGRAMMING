// #include <stdio.h>

// int main()
// {

//     int num = 1;

//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 3; j > i; j--)
//         {
//             printf(" ");
//         }

//         for (int k = 1; k <= i * 2 - 1; k++)
//         {
//             printf("%d", num);
//             num++;
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