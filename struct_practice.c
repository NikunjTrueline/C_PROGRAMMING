/*

Structure :

          - user define datatype.

          used for store multiple type multiple element stored in one varible and we can access easily.

          - store set of information.

*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int emp_id;
    float emp_salary;
    char emp_name[20];
};

int main()
{

    struct employee emp[3];

    printf("Size of employee structure  is %d\n", sizeof(emp));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter employee id : ");
        scanf("%d", &emp[i].emp_id);

        printf("Enter employee salary : ");
        scanf("%lf", &emp[i].emp_salary);

        printf("Enter employee name : ");
        scanf("%s", emp[i].emp_name);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nEmployee %d Details.  \n", i + 1);
        printf("Emp name is %s\n", emp[i].emp_name);
        printf("Emp id is %d\n", emp[i].emp_id);
        printf("Emp salary is %.2lf\n", emp[i].emp_salary);
    }
}
