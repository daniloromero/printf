#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
void print_char(va_list list, char *buffer, unsigned int *size)
{
	buffer[*size] = va_arg(list, int);
	*size++;
}

/**
 *
 *
 *
 */
void print_int(va_list list, char *buffer, unsigned int *size)
{
	int m = va_arg(list, int), i = 0, n = m, tmp;

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
		m = (m /10);
	}
	*size += tmp;
}

/**
 *
 *
 *
 */
void print_str(va_list list, char *buffer, unsigned int *size)
{
        char *str = va_arg(list, int);
	int counter = 0;
	while (str)
	{
		buffer[*size] = str[counter];
		*size++;
		counter++;
	}
}

/**
 *
 *
 *
 */
void print_perc(va_list list, char *buffer, unsigned int *size)
{
        buffer[*size] = '%';
        *size++;
}
