#ifndef MY_SHELL_H
#define MY_SHELL_H

/*
 * All my header files are imported here
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
 * All my function prototypes are included here
*/

void my_print(const char *input);
void my_prompt(void);
void my_input(char *message, size_t size);
void comm_execute(const char *message);

#endif