#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	 int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("%i\n", 1024);
	_printf("%d\n", 1024);
	_printf("%d\n", -1024);
	_printf("%i\n", INT_MAX);
	_printf("%i\n", INT_MIN);

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("%b\n", 98);

	return (0);
}
