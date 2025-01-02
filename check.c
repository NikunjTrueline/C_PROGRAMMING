#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0;

    printf("enter n:");
    scanf("%d", &n);

    int temp = n, cnt = 0;

    int check1 = 1;
    while (temp > 0)
    {
        temp = temp / 10;
        cnt++;
    }

    temp = n;

    while (temp > 0)
    {
        int rem = temp % 10;
        int res = pow(rem, cnt);

        sum += res;
        temp = temp / 10;
    }

    if (sum == n)
        printf("armstrong");
    else
        printf("not armstrong");

    return 0;
}