#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * struct operator - struct
 * @ch: char
 * @fun: pointer to function
 */
typedef struct operator
{
	char *ch;
	int (*fun)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
