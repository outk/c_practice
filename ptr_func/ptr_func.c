#include <stdio.h>

int sum(int, int);

int sub(int, int);

int mul(int, int);

int div(int, int);

int 
sum(int a, int b)
{
    int return_value;

    return_value = a + b;

    return return_value;
}

int 
sub(int a, int b)
{
    int return_value;

    return_value = a - b;

    return return_value;
}

int 
mul(int a, int b)
{
    int return_value;

    return_value = a * b;

    return return_value;
}

int 
div(int a, int b)
{
    int return_value;

    return_value = a / b;

    return return_value;
}

int 
main(int argc, char *argv[])
{
    int num_1, num_2, answer;
    int (*ptr_function) (int, int);

    num_1 = 1;
    num_2 = 2;
    
    ptr_function = sum;

    answer = ptr_function(num_1, num_2);
    printf("answer = %d\n", answer);

    return 0;
}

