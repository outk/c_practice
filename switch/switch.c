#include <stdio.h>

int 
main(int argc, char *argv[])
{
    int a;

    a = '+';

    switch (a)
    {
    case '+':
        printf("a is '+'");
        break;
    
    default:
        printf("a is not '+'");
        break;
    }
    return 0;
}