#include <stdio.h>

void reverseString(char str[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // Swap the characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call the function on the remaining substring
    reverseString(str, start + 1, end - 1);
}

int main()
{
    char str[] = "Nikunj";
    int length = strlen(str);

    printf("Original string: %s\n", str);

    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);
    return 0;
}