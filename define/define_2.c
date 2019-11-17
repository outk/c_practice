// #define TEST        1
#ifdef TEST

// #if TEST == 1
#include <stdio.h>
int
main(int argc, char *argv[])
{
    printf("hello, world\n");

    return 0;
}
#else
#endif

#ifdef TEST
#else
#include <stdio.h>
int
main(int argc, char *argv[])
{
    printf("hello, world\n");

    return 0;
}
#endif