#include <stdio.h>

float sum(float array[]);

int main()
{
    float array[6] = {10.0, 2.4, 36.3, 4.0, 5.66, 9.0};

    // float num = sum(array);
    printf("%f\n", sum(array));
}

float sum(float array[])
{
    float sum = 0.0;
    for (int i = 0; i < 6; i++)
    {

        sum += array[i];
    }

    return sum;
}