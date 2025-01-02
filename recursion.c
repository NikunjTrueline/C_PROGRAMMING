#include <stdio.h>

int factorial(int n)
{
    if (n != 0 || n != 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{

    int total = factorial(10);
    printf("%d", total);
}