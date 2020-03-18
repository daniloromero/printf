#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_binary - unsigned int argument is converted to binary
 *@list: argument
 *@buffer: memory storage for output
 *@size: buffer current position
 */
void print_binary(va_list list, char *buffer, unsigned int *size)
{
	long int m = va_arg(list, unsigned int), i = 0, n, tmp;

	if (m == 0)
	{
		buffer[*size] = '0';
		*size += 1;
		return;
	}
	n = m;
	while (n > 0)
	{
		i++;
		n = (n / 2);
	}
	tmp = i;
	while  (i > 0)
	{
		buffer[*size + i - 1] = (m % 2) + '0';
		i--;
		m = (m / 2);
	}
	*size += tmp;
}
/**
 *print_unsignedint - print unsigned integers
 *@list: arguments
 *@buffer: memory storage fo output
 *@size: buffer current position
 */
void print_unsignedint(va_list list, char *buffer, unsigned int *size)
{
	unsigned int m = va_arg(list, unsigned int), i = 0, n = m, tmp;

	while ((n / 10) > 0)
	{
		i++;
		n = (n / 10);
	}
	i++;
	tmp = i;
	while (i > 0)
	{
		buffer[*size + i - 1] = (m % 10) + '0';
		i--;
		m = (m / 10);
	}
	*size += tmp;
}
