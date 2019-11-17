#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int number_2;
    int *pnumber_2;

    number_2 = 1;
    pnumber_2 = &number_2;

    printf("address of number_2 is %p\n", pnumber_2);

    printf("number_2 is %d\n", *pnumber_2);

    return 0;
}