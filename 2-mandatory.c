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
 long int number = num;
 long int temp;
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
 ptr = malloc((sizeof(char) * len) + 1);

 if (ptr == NULL)
  return (0);

 i = len - 1;
 while (i >= 0)
 {
  ptr[i] = (temp % 10) + '0';
  temp = temp / 10;
  i--;
 }
 ptr[len] = '\0';

 while (j < len)
 {
  _putchar(ptr[j]);
  j++;
 }
 free(ptr);
 return (len);
}
