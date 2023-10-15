#include "main.h"
/**
 * print_binary - ...
 * @pa: pointer to argument
 * Return: (void)
 */

int print_binary(va_list pa)
{
	int temp = 0, i = 0, j = 0, count = 0, result = 0;
int (*ptr)(int, int) = _pow_recursion;

	temp = va_arg(pa, int);


while (i < temp)
{
	i += ptr(2, j);
	if (i >= temp)
	break;
	j++;

}

while (j >= 0)
{
	result = ptr(2, j);
	if (ptr(2, j) <= temp && temp > 0)
	{
		_putchar('1');
		temp -= result;
	}
	else
	{
		_putchar('0');
	}
	j--;
	count++;
}
	return (count);
}

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
{"b", print_binary}};

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
			while (j < 4)
			{
				if (format[i + 1] == *identifier[j].ch)
				{
					counter += identifier[j].fun(pa), i++;
					break;
				}
				j++;
			}
			if (j == 4)
			return (-1);
		}
	i++;
	}
	}
	va_end(pa);
return (counter);
}
