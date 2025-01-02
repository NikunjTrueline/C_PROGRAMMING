#include <stdio.h>

/*
    do..while

    - syntax:

    initialization

    do
    {
        statement
        updation
    }
    while(condition);

    - it is called as Exit Controlled Loop.
    -Because the condition is checked at last.
    -It will execute the block atleast once even if the condition  is false.

*/

void main()
{
    int i = 1;

    do
    {
        printf("%d", i);

        i++;
    } while (i < 10);
}