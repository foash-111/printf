#include"main.h"
/**
 * print_integer - ...
 * @pa: pointer to argument
 * Return: len
*/

int print_integer(va_list pa)
{
	int len = 0, temp = 0 , i = 0, j = 0;
	int number = va_arg(pa, int);
char *ptr;
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	temp = number;
	while (number)
	{
		number /= 10;
		len++;
	}

	ptr = malloc((sizeof(char) * len) + 1 );

	if(ptr == NULL)
	return (0);

while(i < len)
{
	ptr[i] = (temp % 10) + '0';
	temp = temp / 10;
	i++;
}
ptr[i] = '\0';
i--;
while (j < len)
{
	_putchar(ptr[i]);
	i--;
	j++;
}
free(ptr);
return (len);
}
