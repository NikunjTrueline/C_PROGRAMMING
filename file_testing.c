#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("file_demo.txt", "r");

    // fputc('N', fptr);
    // fputc('I', fptr);

    // fputs("we learn c programmming\n", fptr);
    // fputs("HELLO WORLD", fptr);

    // char read1 = fgetc(fptr);

    // printf("character is %c\n", read1);

    char reads[30];

    fgets(reads, 30, fptr);

    printf("The string is %s\n", reads);

    fclose(fptr);
}