#include <stdio.h>

int main()
{

    char name[20];
    int length = 0;

    printf("Enter a name : ");
    gets(name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }

       printf("length is %d", length);
}