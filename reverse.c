#include <stdio.h>

int main()
{

    int num;

    int r;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        r = num % 10;
        printf("%d", r);
        num /= 10;
    }
}