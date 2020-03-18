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
/**
 *print_hexadec - print unsigned integers lower hexadecimal
 *@list: arguments
 *@buffer: memory storage fo output
 *@size: buffer current position
 */
/*void print_hexadec(va_list list, char *buffer, unsigned int *size)
{
	unsigned int m = va_arg(list, unsigned int), i = 0, n = m, tmp, hexa;

	while ((n / 16) > 0)
	{
		i++;
		n = (n / 16);
	}
	tmp = i;
	while (i > 0)
	{
		hexa = m % 16;
		buffer[*size + (i - 1)] = hexa < 10 ? hexa + '0' : (hexa - 10) + 'a';
		i--;
		m = (m / 16);
	}
	*size += tmp;
}
**
 *print_HexaDec - print unsigned integers UPPER Hexadecimal
 *@list: arguments
 *@buffer: memory storage fo output
 *@size: buffer current position
 *
void print_HexaDec(va_list list, char *buffer, unsigned int *size)
{
	unsigned int m = va_arg(list, unsigned int), i = 0, n = m, tmp, Hexa;

	while ((n / 16) > 0)
	{
		i++;
		n = (n / 16);
	}
	tmp = i;
	while (i > 0)
	{
		Hexa = m % 16;
		buffer[*size + i - 1] = Hexa < 10 ? Hexa + '0' : (Hexa - 10) + 'a';
		i--;
		m = (m / 16);
	}
	*size += tmp;
}*/
