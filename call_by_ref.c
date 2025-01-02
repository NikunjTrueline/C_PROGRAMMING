#include <stdio.h>

int main()
{

    int n = 10;

    printf("%d\n", sum(n));
    printf("%d\n", n);

    printf("%d\n", _sum(&n));
    printf("%d\n", n);
}

int sum(int n)
{
    n = n + n;
}

int _sum(int *n)
{
    *n = *n * *n;
    return *n;
}
