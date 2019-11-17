#include <stdio.h>

void func(void);

void
func(void)
{
    printf("This is func.\n");
}

int 
main(int argc, char *argv[])
{
    char one_string[] = "hello, world\n";
    void (*ptr_function) (void);

    ptr_function = &func;
    printf("func %p\n", func);
    printf("&func %p\n", &func);
    // ptr_function = (void (*) (void)) one_string;
    
    ptr_function();

    return 0;
}