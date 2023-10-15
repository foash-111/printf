#include"main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
char *ptr = NULL;
	 len = _printf("%%%s\n", ptr);
	len2 = printf("%%%s\n", ptr);

_printf("Let's print a simple sentence.\n");
_printf("%s", "I am a string !\n");
_printf("%c\n", 'S');
_printf("%%\n");
	printf("%d\n", len);
	printf("%d\n", len2);

	_printf("%b\n", 98);

	return (0);
}

