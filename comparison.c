#include <stdio.h>

int main()
{

    int n1;
    int n2;
    int n3;

    printf("Enter any three value : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%d is greter than any two", n1);
        }
        else
        {
            printf("%d is greter than two", n3);
        }
    }
    else
    {

        if (n2 > n3)
        {
            printf("%d is greater than any ", n2);
        }
        else
        {
            printf("%d is greater than any two number", n3);
        }
    }
}