#include <stdio.h>

int main()
{
    int num;

    printf("press 1 for pass maths. \n press 2 for pass science. \n and than press 3 for pass maths_and_science. :\n ");

    scanf("%d", &num);

    if (num == 1 || num == 2)
    {
        printf("you win 15 rupees.");
    }
    else if (num == 3)
    {
        printf("you win 40 ruppes ");
    }
    else
    {
        printf("Nothing.");
    }
}