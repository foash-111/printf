#include "main.h"

/**
 * print_char - ...
 * @pa: pointer to argument
 * Return: (void)
 */

int print_char(va_list pa)
{
	char ptr = va_arg(pa, int);

	_putchar(ptr);
	return (1);

}

/**
 * print_string - ...
 * @pa: pointer to argument
 * Return: (void)
 */
int print_string(va_list pa)
{
	char *ptr;
	int i = 0;

	ptr = va_arg(pa, char *);

	if (ptr != NULL)
	{
	while (ptr[i])
	{
		_putchar(ptr[i]);
		i++;
	}
	}
	else
	{
		ptr = "(null)";
		while (ptr[i])
		{
			_putchar(ptr[i]);
			i++;
		}
	}
return (i);

}



/**
 * _printf - variadic function to print anything
 * @format: pointer to argument
 * @...: ...
 * Return: (void)
 */

int _printf(const char *format, ...)
{
	va_list pa;
	int i = 0, j = 0, counter = 0;
op_t identifier[] = {{"c", print_char}, {"s", print_string}};

	va_start(pa, format);
	if (format)
	{
	while (format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]), counter++;
		else if (format[i] == '%' && format[i + 1] == '%')
			_putchar(format[i + 1]), i++, counter++;
		else
		{
			j = 0;
			while (j < 2)
			{
				if (format[i + 1] == *identifier[j].ch)
				{
					counter += identifier[j].fun(pa), i++;
					break;
				}
				j++;
			}
				if (j == 2)
				_putchar(format[i]), _putchar(format[i + 1]), i++, counter++;
		}
	i++;
	}
	}
	else
	_putchar('\0');
	va_end(pa);
return (counter);
}
