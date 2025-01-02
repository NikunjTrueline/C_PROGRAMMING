#include <stdio.h>

int main()
{

    int number;

    int first;
    int second;
    int third;
    int four;
    int five;

    int result;

    printf("Enter your Roll number : ");
    scanf("%d", &number);

    printf("Enter your first subject marks : ");
    scanf("%d", &first);

    printf("Enter your second subject marks : ");
    scanf("%d", &second);

    printf("Enter your third subject marks : ");
    scanf("%d", &third);

    printf("Enter your four subject marks : ");
    scanf("%d", &four);

    printf("Enter your five subject marks : ");
    scanf("%d", &five);

    result = first + second + third + four + five;

    printf("Your total marks is %d\n", result);

    int percentage = result / 5;

    printf("Your percentage  is %d\n", percentage);

    if (percentage > 90)
    {
        printf(" A Grade ");
    }
    else if (percentage > 80)
    {
        printf(" B Grade");
    }
    else if (percentage > 70)
    {
        printf("c grade");
    }
    else if (percentage > 60)
    {
        printf("zd grade");
    }else{
        printf("Sorry but you are fail");
    }

    return 0;
}