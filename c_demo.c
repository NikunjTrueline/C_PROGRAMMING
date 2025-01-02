#include <stdio.h>

int main()
{

    int value1;
    int value2;

    printf("ENTER A FIRST VALUE : ");
    scanf("%d", &value1);

    printf("ENTER A SECOND VALUE : ");
    scanf("%d", &value2);

    int press;
    int result;

    printf("PRESS 1 FOR SUMMATION. PRESS 2 FOR SUBSTRACTION. PRESS 3 FOR MULTIPLIACATION. PRESS 4 FOR DIVISION.");
    scanf("%d", &press);

    if (press == 1)
    {
        result = value1 + value2;
        printf("%d", result);
    }
    else if (press == 2)
    {
        result = value1 - value2;
        printf("%d", result);
    }
    else if (press == 3)
    {
        result = value1 * value2;
        printf("%d", result);
    }
    else if (press == 4)
    {
        result = value1 / value2;
        printf("%d", result);
    }else{
        printf("Nothing");
    }

    return 0;
}