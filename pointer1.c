/*
Pointer : Pointer is one kind of varible which store the address of the another variable.

- directly work with memory location.
*/

#include <stdio.h>

void geeks()
{

    int val[3] = {5, 10, 15};

    int *ptr;

    ptr = &val;

    printf("Elements of the array are: ");

    printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);

    return;
}

int main()
{
    int a = 10;

    int *ptr;
    double *ptre;

    ptr = &a;

    int **demo;
    demo = &ptr;

    int ***check;

    check = &demo;

    void *test = NULL;

    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", ptr);
    printf("%d\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n", demo);
    printf("%d\n", &demo);
    printf("%d\n", *demo);
    printf("%d\n", **demo);
    printf("%d\n", check);
    printf("%d\n", &check);
    printf("%d\n", *check);
    printf("%d\n", **check);
    printf("%d\n", ***check);

    printf("%d", sizeof(*demo));

    // array pointer

    int array[5] = {1, 2, 3, 4, 5};

    int *arr = &array;

    printf("%p\n", arr);
    printf("%d\n", *arr);
    *arr += 2;
    printf("%d\n", arr[4]);

    geeks();

    int arrdemo[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arrdemo[2];
    int *ptr2 = &arrdemo[4];

    printf("Pointer 1 points to: %d\n", *ptr1);
    printf("Pointer 2 points to: %d\n", *ptr2);

    int difference = ptr2 - ptr1; // Number of elements between ptr1 and ptr2
    printf("Number of elements between ptr1 and ptr2: %d\n", difference);

    int d;

    printf("The value of d is %d\n", d);
}
