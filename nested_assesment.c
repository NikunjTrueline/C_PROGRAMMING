#include <stdio.h>

int main()
{

    /*
       1
      4 4
     9 9 9
    16 16 16 16
    */

    for (int i = 1; i <= 5; i++)
    {
        for (int space = 1; space <= 5 - i; space++)
        {

            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" %d",(i*i));
        }
        printf("\n");
    }
}