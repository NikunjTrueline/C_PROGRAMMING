#include <stdio.h>

int main()
{

    int number;

    printf("Enter a number ");
    scanf("%d", &number);

        while (number>= 1 && number <= 100)
    {
        printf("yes number is betweeen 1 to 100");
        break;
    }

    return 0;
}