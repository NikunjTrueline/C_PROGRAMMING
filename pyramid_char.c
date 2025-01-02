#include <stdio.h>

int main()
{
   int rows, i, j;
   char ch = 'A';

   // Get the number of rows from the user
   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   // Iterate over the rows and columns to print the pattern
   for (i = 1; i <= rows; i++)
   {
      for (j = 1; j <= i; j++)
      {
         printf("%c ", ch);
         ch++;
      }
      printf("\n");
   }

   return 0;
}
