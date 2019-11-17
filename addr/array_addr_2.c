#include <stdio.h>

int
main(int argc, char *argv[])
{
    int number_array[4] = {1000, 2000, 3000, 4000};
    int *pnumber;

    pnumber = number_array;

    printf("*pnumber is %d\n", *pnumber);

    pnumber = &number_array[1];

    printf("*pnumber is %d\n", *pnumber);

    pnumber = &number_array[2];

    printf("*pnumber is %d\n", *pnumber);

    pnumber = &number_array[3];

    printf("*pnumber is %d\n", *pnumber);

    return 0;
}