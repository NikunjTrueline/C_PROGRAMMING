#include <stdio.h>

int main()
{

    int num;
    int t1 = 0, t2 = 1;
    int sum;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("%d , %d , ", t1, t2);

    for (int i = 3; i <= num; i++)
    {
        sum = t1 + t2;
        printf("%d , ", sum);

        t1 = t2;
        t2 = sum;
    }
}