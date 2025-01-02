#include <stdio.h>

struct strcture1
{
    int std_rollno;
    char std_name[20];
    float student_per;
};

int main()
{
    struct strcture1 obj;

    printf("Enter a roll number : ");
    scanf("%d", &obj.std_rollno);

    printf("Enter a name : ");
    scanf("%s", &obj.std_name);

    printf("Enter a percentage : ");
    scanf("%f", &obj.student_per);

    printf("Roll no is : %d\n", obj.std_rollno);
    printf("Name is : %s\n", obj.std_name);
    printf("Percantafe is : %f\n", obj.student_per);
}