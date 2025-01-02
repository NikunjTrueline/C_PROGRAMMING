#include <stdio.h>

/*
file open for = Fopen
file close for = fclose
file pointer for = FILE *fp
file three operation
  read - r
  write - w (new bani jashe ane old data delet thai jashe )
  update - a (new file bani jashe ane old data sathe new data update trhay ne mali jashe )

*/

// int main()
// {

//     char name[20];

//     printf("Enter your name : ");
//     gets(name);

//     FILE *fp;

//     fp = fopen("demo2.txt", "a");

//     fprintf(fp, "\n Your name is %s", name);

//     fclose(fp);
// }

int main()
{

  char name[20];

  printf("Enter a your name : ");
  gets(name);

  FILE *fp;

  fp = fopen("practice2.txt", "a");

  fprintf(fp, "your name is %s\n", name);

  char read[20];
  fscanf(fp, "%s", read);

  printf("%s", read);

  fclose(fp);
}
