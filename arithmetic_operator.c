#include <stdio.h>

int main()
{

    //        +     -   *   /

    int val1;
    int val2;

    printf("ENTER A FIRST VALUE :  ");
    scanf("%d", &val1);

    printf("ENTER A SECOND VALUE : ");
    scanf("%d", &val2);

    int select;
    int result;

    printf("Enter 1 for summation enter 2 number for substracion  enter 3 number for multiplication enter a 4 number for divison enter a  5 number for modula : ");
    scanf("%d", &select);

    if (select == 1)
    {
        result = val1 + val2;
        printf("%d", result);
    }
    else if (select == 2)
    {
        result = val1 - val2;
        printf("%d", result);
    }
    else if (select == 3)
    {
        result = val1 * val2;
        printf("%d", result);
    }
    else if (select == 4)
    {
        result = val1 / val2;
        printf("%d", result);
    }
    else if (select == 5)
    {
        result = val1 % val2;
        printf("%d", result);
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}