#include"main.h"
/**
 * print_integer - ...
 * @pa: pointer to argument
 * Return: len
*/
int print_integer(va_list pa)
{
	int len = 0, i = 0, j = 0;
	int num = va_arg(pa, int);
	long int number = num, temp;
	char *ptr;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	temp = number;
	do
	{
		number /= 10;
		len++;
	} while (number != 0);

	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (0);

	i = len - 1;
	do
	{
		ptr[i] = (temp % 10) + '0';
		temp = temp / 10;
		i--;
	} while (temp != 0);

	for (j = 0; j < len; j++)
	{
		_putchar(ptr[j]);
	}
	free(ptr);
	return (len);
}
/**
 * print_integer_part - print_integer_part
 * @number: number i want
 * Return: len
*/
int print_integer_part(double number)
{
	unsigned long int temp;
	int len = 0, i = 0;
	char *ptr;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	temp = (unsigned long int)number;
	while (temp)
	{
		temp /= 10;
		len++;
	}

	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (0);

	temp = (unsigned long int)number;
	while (i < len)
	{
		ptr[i] = (temp % 10) + '0';
		temp = temp / 10;
		i++;
	}

	ptr[i] = '\0';
	for (int j = 0; j < i; j++)
	{
		_putchar(ptr[i - 1 - j]);
	}

	free(ptr);
	return i;
}
/**
 * print_fraction_part - print_fraction_part
 * @number: the number i want to print
 * Return: len to the numner
*/
int print_fraction_part(double number)
{
	double diffirence = number - (unsigned long int)number;
	int len = 0, j = 0;
	char *ptr;

	if (diffirence > 0)
	{
		_putchar('.');
		while (diffirence)
		{
			diffirence *= 10;
			len++;
		}

		ptr = malloc((sizeof(char) * len) + 1);
		if (ptr == NULL)
			return (0);

		while (j < len)
		{
			ptr[j] = ((unsigned long int)diffirence % 10) + '0';
			diffirence = diffirence / 10;
			j++;
		}

		ptr[j] = '\0';
		for (int i = 0; i < j; i++)
		{
			_putchar(ptr[j - 1 - i]);
		}

		free(ptr);
	}

	return j;
}
/**
 * print_double - ...
 * @pa: pointer to argument
 * Return: int
 */
int print_double(va_list pa)
{
	double number = va_arg(pa, double);
	int int_len = print_integer_part(number);
	int frac_len = print_fractional_part(number);
	return (int_len + frac_len);
}
