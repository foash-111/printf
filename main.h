#ifndef MAIN_H
#define MAIN_H

/*****library******/
#include <unistd.h>
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

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

int _pow_recursion(int x, int y);
int print_binary(va_list pa);
int print_string(va_list pa);
int print_percentage(va_list pa);
int print_char(va_list pa);
int print_integer(va_list pa);
int print_double(va_list pa);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
