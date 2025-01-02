#include <stdio.h>
#include <math.h>

int main()
{

    int p, n;
    float r;

    printf("Enter a principle : ");
    scanf("%d", &p);

    printf("Enter a rate of interst : ");
    scanf("%f", &r);

    printf("Enter a number of year : ");
    scanf("%d", &n);

    float ci;

    float power = 1 + (r / 100);

    ci = p * (pow(power, n) - 1);

    printf("Your compound interst is %f", ci);
}