#include <stdio.h>

int sum(int *, int *, int *);

int
sum(int *a, int *b, int *ans)
{
    if (ans == NULL) {
        return -1;
    }
    *ans = *a + *b;

    return 0;
}

int
main(int argc, char *argv[])
{
    int num_1, num_2, ans;
    int *answer;
    
    num_1 = 1;
    num_2 = 2;
    answer = &ans;
    // answer = NULL;

    if (sum(&num_1, &num_2, answer) != 0) {
        printf("error\n");
    }

    printf("The answer is ...\n");

    printf("answer = %d\n", *answer);

    printf("address of answer is %p\n", answer);

    return 0;
}