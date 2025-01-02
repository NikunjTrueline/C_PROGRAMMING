#include <stdio.h>
#include <string.h>

int main()
{

  char name[20] = "Asodariya Nikunj";

  printf("%s\n", name);

  printf("size of : %d\n", sizeof(name));

  char str1[] = "Hello ";
  char str2[] = "World!";

  // strcat(str1, str2);
  printf(str1, "\n");

  printf("\n----------------\n");
  //
  printf("%d\n", strcpy(str1, str2));

  //   printf("----------------\n");

  //  printf(str2, "\n");

  // printf("---------------\n");

  char str7[] = "Hello";
  char str8[] = "Hello9";
  char str9[] = "Hi";

  printf("%d\n", strcmp(str7, str8));

  //   printf("---------------\n");
}