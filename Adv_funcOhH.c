#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_octal - unsigned int argument is converted to binary
 *@list: argument
 *@buffer: memory storage for output
 *@size: buffer current position
 */
void print_octal(va_list list, char *buffer, unsigned int *size)
{
	unsigned int m = va_arg(list, unsigned int), i = 0, n, tmp;

	n = m;
	while (n > 0)
	{
		i++;
		n = (n / 8);
	}
	tmp = i;
	while  (i > 0)
	{
		buffer[*size + i - 1] = (m % 8) + '0';
		i--;
		m = (m / 8);
	}
	*size += tmp;
}
