#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, simple_interest, compound_interest;
    int n;

    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principle * rate * time) / 100;

    printf("Simple Interest = %.2f\n", simple_interest);

    printf("Enter the number of times interest is compounded per year : ");
    scanf("%d", &n);

    // Calculate Compound Interest
    if (n > 0)
    {
        compound_interest = principle * pow(1 + (rate / (n * 100)), n * time) - principle;
    }

    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
