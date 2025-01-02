#include <stdio.h>

int main()
{

    int choice;
    float num;

    printf("choose 1 for convert day in year\n ");
    printf("choose 2 for convert year to days\n");
    scanf("%d",&choice);

    if (choice == 1)
    {
        printf("Enter number of day : ");
        scanf("%f", &num);
        printf("%.2f  day and than convert year so result is %.2f ", num, num / 365);
    }
    else
    {
        printf("Enter a number of year : ");
        scanf("%f", &num);
        printf("%.2f  year and than convert day so result is %.2f ", num, num * 365);

        return 0;
    }
}