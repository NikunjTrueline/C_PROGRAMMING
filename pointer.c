#include <stdio.h>

int main()
{

    int a = 10;
    int *ptr;
    ptr = &a;
    int **q;
    q = &ptr;

    printf("%d\n", ptr);
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", *ptr);
    printf("%u\n", &a);
    printf("%d\n", *ptr);
    printf("%d\n", &ptr);
    printf("%d\n", q);
    printf("%d\n", *q);
    printf("%d\n", **q);
    printf("%d\n", &q);
}