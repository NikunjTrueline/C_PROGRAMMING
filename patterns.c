#include <stdio.h>

int main()
{

    /*
     *
     * *
     * * *
     * * * *
     * * * * *

     * * * * *
     * * * *
     * * *
     * *
     *


     A
     B B
     C C C
     D D D D
     E E E E E

     A
     A B
     A B C
     A B C D
     A B C D E

     1
     2 3
     4 5 6
     7 8 9 10

     * * * * *
      * * * * *
       * * * * *
        * * * * *
         * * * * *

            *      space = 4
          * *      space = 3
        * * *      space = 2
      * * * *      space = 1
    * * * * *      space = 0


    * * * * *
      * * * *
        * * *
          * *
            *


    * * * * *
    *       *
    *       *
    *       *
    * * * * *





     */

    int count = 1;

    for (int i = 1; i <= 5; i++)
    {

        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }

        for (int j = 5; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }
}