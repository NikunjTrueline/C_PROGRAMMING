#include <stdio.h>

/*

defination of loop - it is process gets repetad again and again until the loop dosen't satisfy.

two types of loop avliable in c programming

 1> Entry controlled loop
 2> Exit controlled loop


*/
int main()
{

    /*
    while(condition){
        statment;
        upadation;
    }
    */

    int a = 0;

    while (a <= 10)
    {
        printf("%d\n", a);
        a = a + 3;
    }
}