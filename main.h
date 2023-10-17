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

int _pow_recursion(int x, int y);
int print_binary(va_list pa);
int print_string(va_list pa);
int print_percentage(va_list pa);
int print_char(va_list pa);
int print_integer(va_list pa);
char *print_decimal(va_list pa);
void rev_string(char *s);
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
