#include "shell.h"

/**
 * my_print - Function to print to output
 * @input: input string
 * 
 * Return: Always void
 */

void my_print(const char *input)
{
    write(STDOUT_FILENO, input, strlen(input));
}