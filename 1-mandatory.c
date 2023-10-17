#include "main.h"

/**
 * print_char - ...
 * @pa: pointer to argument
 * Return: (void)
 */

int print_char(va_list pa)
{
	int ptr = va_arg(pa, int);

	if (pa == NULL)
		return (-1);

	_putchar(ptr);
	return (1);

}

/**
 * print_percentage - ...
 * @pa: pointer to argument
 * Return: (void)
 */

int print_percentage(va_list pa)
{
	(void) pa;

	_putchar('%');
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
	if (pa == NULL)
	(void) pa;

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
op_t identifier[] = {{"c", print_char}, {"s", print_string},
{"%", print_percentage},
};

	va_start(pa, format);
	if (format == NULL)
	return (-1);
	else
	{
	while (format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]), counter++;
		else
		{
			j = 0;
			while (j < 3)
			{
				if (format[i + 1] == *identifier[j].ch)
				{
					counter += identifier[j].fun(pa), i++;
					break;
				}
				j++;
			}
			if (j == 3)
			return (-1);
		}
	i++;
	}
	}
	va_end(pa);
return (counter);
}
