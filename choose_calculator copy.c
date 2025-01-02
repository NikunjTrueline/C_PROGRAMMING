#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}

int main()

{
    int choice, num1, num2, result;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("Enter first numbers: ");
        scanf("%d", &num1);
        printf("Enter second numbers: ");
        scanf("%d", &num2);

        result = add(num1, num2);
        printf("Result: %d\n", result);
        break;

    case 2:

        printf("Enter first numbers: ");
        scanf("%d", &num1);
        printf("Enter second numbers: ");
        scanf("%d", &num2);

        result = subtract(num1, num2);
        printf("Result: %d\n", result);
        break;

    case 3:

        printf("Enter first numbers: ");
        scanf("%d", &num1);
        printf("Enter second numbers: ");
        scanf("%d", &num2);

        result = multiply(num1, num2);
        printf("Result: %d\n", result);
        break;

    case 4:

        printf("Enter first numbers: ");
        scanf("%d", &num1);
        printf("Enter second numbers: ");
        scanf("%d", &num2);

        result = divide(num1, num2);
        printf("Result: %d\n", result);
        break;

    case 5:
        return 0;

    default:
        printf("Invalid choice\n");
    }
}
