#include <stdio.h>

int
main(int argc, char *argv[])
{
    struct tag_question {
        char character;
        double number;
    };

    printf("size of question is %zu\n", sizeof(struct tag_question));

    return 0;
}