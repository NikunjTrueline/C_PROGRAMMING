#include <stdio.h>

int main()
{

    char name[10];

    printf("Enter your name : ");
    gets(name);

    FILE *ptr;

    ptr = fopen("file1.txt", "a");

    fprintf(ptr, "Your name is %s\n", name);

    ptr = fopen("file1.txt", "r");

    char store[300];

    while (fgets(store, 500, ptr) != NULL)
    {
        printf("File content is : %s", store);
    }

    fclose(ptr);
}