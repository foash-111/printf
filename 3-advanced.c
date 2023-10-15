#include"main.h"

/**
 *_pow_recursion - find the result of power of the function
 *
 *@x: the base
 *@y: the power
 *
 *Return: the result
*/



int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else if (y == 1)
	return (x);
else
	return (x * _pow_recursion(x, y - 1));

}


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
