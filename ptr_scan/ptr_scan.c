#include <stdio.h>

int 
main(int argc, char *argv[])
{
    int i;
    unsigned char *ptr;

    // ptr = (unsigned char *) 0x1000;
    char buf[1024] = "This is text message.";
    ptr = (unsigned char *) buf;

    for (i = 0; i < 0x100; i++) {
        printf("0x%02X ", *ptr);
        if (((i + 1) % 15) == 0) {
            printf("\n");
        }
        ptr++;
    }
    printf("\n");

    return 0;
}