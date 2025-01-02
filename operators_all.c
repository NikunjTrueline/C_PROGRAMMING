#include <stdio.h>

int main()
{

    int a = 10;

    int b = 20;

    printf("------------arithimetic-------------------------\n");

    printf("a + b = %d \n", a + b);
    printf("a - b = %d \n", a - b);
    printf("a * b = %d \n", a * b);
    printf("a / b = %d \n", a / 0);
    printf("a %% b = %d \n", a % 0);

    printf("---------------relational----------------------\n");

    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a <= b);
    printf("%d\n", a >= b);

    printf("--------------logical------------------------\n");

    printf("%d\n", (b > a) && (a < b));

    printf("%d\n", (a > b) || (a < b));

    printf("%d\n", !(a < b));

    printf("--------------conditional------------------------\n");

    (a > b) ? printf("yes \n") : printf("no \n");

    (a < b) ? printf("yes \n") : printf("no \n");

    printf("--------------Assignment------------------------\n");

    printf("%d\n", a += b); // a = a+b
    printf("%d\n", a -= b); // a = a-b
    printf("%d\n", a *= b); // a = a*b

    printf("-------------Size of------------------------\n");

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));

    float c = 10.56;
    char d = "a";

    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));

    printf("%d\n", 10 * 2 + 4 / 2);
}
