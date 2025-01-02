#include <stdio.h>

int main()
{

    int num;

    printf("Enter number for print table ");
    scanf("%d", &num);

    int i = 1;
table:

    printf("%d X %d = %d\n", num, i, num * i);
    i++;

    if (i <= 10)
    {
        goto table;
    }
}