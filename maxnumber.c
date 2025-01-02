#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max_digit = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Take absolute value to handle negative numbers
    // number = abs(number);

    while (number > 0)
    {
        digit = number % 10;
        if (digit > max_digit)
        {
            max_digit = digit;
        }
        number /= 10;
    }

    printf("Max digit is %d", max_digit);

    return 0;
}
