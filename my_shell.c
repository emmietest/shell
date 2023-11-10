#include <stdio.h>
#include "my_shell.h"

int main(void)
{
    char *ptr = NULL;
    size_t n = 0;

    my_print("$ ");
    while (getline(&ptr, &n, stdin) != EOF)
    {
        my_print(ptr);
        my_print("$ ");
    }
    exit(EXIT_SUCCESS);
}