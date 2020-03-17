#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - prints chars
 * @list: list of arguments
 * @buffer: Pointer to a buffer that stores chars to print
 * @size: Pointer to a variable that counts the position in buffer
 */
void print_char(va_list list, char *buffer, unsigned int *size)
{
	buffer[*size] = va_arg(list, int);
	*size += 1;
}

/**
 * print_int - Print integers
 * @list: list of arguments
 * @buffer: Pointer to a buffer that stores chars to print
 * @size: Pointer to a variable that counts the position in buffer
 */
void print_int(va_list list, char *buffer, unsigned int *size)
{
	int m = va_arg(list, int), i = 0, n, tmp;

	if (m < 0)
	{
		m = m * (-1);
		buffer[*size] = '-';
		*size += 1;
	}
	n = m;
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

/**
 * print_str - prints strings
 * @list: list of arguments
 * @buffer: Pointer to a buffer that stores chars to print
 * @size: Pointer to a variable that counts the position in buffer
 */
void print_str(va_list list, char *buffer, unsigned int *size)
{
	char *str = va_arg(list, int);
	int counter = 0;

	if (str == NULL)
		str = "(null)";
	while (str[counter])
	{
		buffer[*size] = str[counter];
		*size += 1;
		counter++;
	}
}

/**
 * print_perc - evaluates cases where % is passed
 * @list: list of arguments
 * @buffer: Pointer to a buffer that stores chars to print
 * @size: Pointer to a variable that counts the position in buffer
 */
void print_perc(__attribute__((unused))va_list list,
char *buffer, unsigned int *size)
{
	buffer[*size] = '%';
	*size += 1;
}

/**
 * print_dec - print decimals numbers
 * @list: list of arguments
 * @buffer: Pointer to a buffer that stores chars to print
 * @size: Pointer to a variable that counts the position in buffer
 */
void print_dec(va_list list, char *buffer, unsigned int *size)
{
	int m = va_arg(list, int), i = 0, n = m, tmp;

	if (m < 0)
	{
		m = m * (-1);
		buffer[*size] = '-';
		*size += 1;
	}
	n = m;
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
