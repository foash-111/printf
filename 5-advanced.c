#include"main.h"
/**
 * print_hexa - function helper
 * @num: number to change
 * Return: (void)
*/
void print_hexa(int num)
{
	if (num < 10)
		_putchar(num + '0');
	else
		_putchar(num - 10 + 'A');
}
/**
 * print_string_hexa - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are printed this way: \x,
 * followed by the ASCII code value in hexadecimal
 * @pa: pointer to the argument
 * Return: length of the string
*/
int print_string_hexa(va_list pa)
{
	int i = 0, temp = 0, div = 0, mod = 0, count = 0;
	char *ptr;

	if (pa == NULL)
		return (-1);

	ptr = va_arg(pa, char *);

	if (ptr == NULL)
		return (-1);

	while (ptr[i])
	{
		if ((ptr[i] > 0 && ptr[i] < 32) || ptr[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			temp = ptr[i];
			div = temp / 16;
			mod = temp % 16;

			print_hexa(div);
			print_hexa(mod);
			count += 3;
		}
		else
			_putchar(ptr[i]);
		i++;
		count++;
	}
	return (count);
}
