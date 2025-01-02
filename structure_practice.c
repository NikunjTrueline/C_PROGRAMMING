#include<stdio.h>


struct student{

   int std_id;
   char std_name[10];
   float std_pr;

};



int main(){


 struct student obj;

 printf("Enter a student id : ");
 scanf("%d",&obj.std_id);

 printf("Enter a student name : ");
 scanf("%s",&obj.std_name);

 printf("Enter a student percentage : ");
 scanf("%f",&obj.std_pr);

 printf("-----------Student details-----------\n");
 
 printf("student id is %d\n",obj.std_id);
 printf("student name is %s\n",obj.std_name);
 printf("student percantage is %.2f\n",obj.std_pr);
 
 printf("size of union %d",sizeof(obj));
}