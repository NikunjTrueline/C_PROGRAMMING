#include <stdio.h>

int recursion(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * recursion(n - 1);
    }
}

int main()
{

    int store = recursion(10);

    printf("%d", store);
}