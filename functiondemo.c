#include <stdio.h>

/*
    Function : It is a piece of code/ block of code
               which performs a specific task

    syntax:

            return-type func-name()
            {
                piece of code.
            }


    2 Types of Functions.

    1) Predefined Functions (already existing functions)
        e.g printf(),scanf()

    2) User-Defined Functions (according to the requirements
        of the user)

    Categories of Functions.

    there are 3 categories of functions.

    Category 1: Function with no return-type and no arguments

        e.g

        void func()
        {

        }

    Category 2: Function with no return-type and with arguments

        e.g

        void func(argument....)
        {
            //code
        }

    Category 3 : Function with return-type and with arguments

    e.g

    int func(argument..)
    {
        //code
        return value;
    }

    3 important facts about the functions

    - Calling the functions
    - Defining the Functions
    - Declaring the Functions

*/

// without argument and without return type.

void f1()
{
    printf("hello world\n");
}

// without argument with return type.

int f2()
{

    int a, b;
    printf("enter a first value\n");
    scanf("%d", &a);

    printf("enter a first value\n");
    scanf("%d", &b);

    int c = printf("The sum of two number is %d\n", a + b);

    return c;
}

// with argument without return type.

void f3(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// with argument and with return type.

int f4(int a, int b)
{

    int c = printf("%d", a + b);

    return c;
}

int main()
{

    f1();

    f2();

    f3(10);

    f4(10, 20);
}