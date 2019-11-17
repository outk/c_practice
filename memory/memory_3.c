#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
    int i;
    char *ptr;

    ptr = malloc(2147483647);
    if (ptr == NULL) {
        printf("Memory allocation error!\n");
        return -1;
    }
    
    getchar();

    for (i = 0; i < 2147483647; i++) {
        ptr[i] = i;
    }

    free(ptr);

    return 0;
}