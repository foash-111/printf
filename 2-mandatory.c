#include"main.h"
/**
 * print_integer - ...
 * @pa: pointer to argument
 * Return: len
*/
int print_integer(va_list pa)
{
	int len = 0, i = 0, j = 0;
	long int num = va_arg(pa, int);
	long int number = num, temp;
	char *ptr;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	temp = number;
	do {
		number /= 10;
		len++;
	} while (number != 0);

	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (0);

	i = len - 1;
	do {
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
 * print_double - ...
 * @pa: pointer to argument
 * Return: len
*/
int print_double(va_list pa)
{
	int len = 0, i = 0, j = 0;
	long int num = va_arg(pa, int);
	 long int number = num, temp;
	char *ptr;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	temp = number;
	do {
		number /= 10;
		len++;
	} while (number != 0);

	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (0);

	i = len - 1;
	do {
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
