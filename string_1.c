#include <stdio.h>
#include <string.h>

int main()
{

    char str1[] = "Trueline Institute";
    char str2[] = "Trueline institute";
    char str3[20] = {'T', 'r', 'u', 'e', 'l', 'i', 'n', 'e', '\0'};
    char str4[] = {'T', 'r', 'u', 'e', 'l', 'i', 'n', 'e', '\0'};

    char demo[] = {'h', 'e', 'l', 'l', 'o'};

    printf("%s", str4);

    char a[20];

    printf("Enter any string : ");
    // scanf("%s", a);

    gets(a);

    puts(a);

    printf("Length of string is %d\n", strlen(a));
    printf("comparison of two string is %d\n", strcmp(str1, str2));
    strcat(str1, str2);
    printf("concranate of string is %s\n", str1);
    // printf("%s\n", str1);
    // printf("%s", a);

    char name1[] = "";
    char name2[10] = "copy";

    printf("copy string is %s", strcpy(name1, name2));

    char strDemo[30] = "Hello Nikunj This side";

    for (int i = 0; strDemo[i] != '\0'; i++)
    {
        printf("%c", strDemo[i]);
    }
}