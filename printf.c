#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - gives format and print data
 * @format: string to print
 * Return: integer size of printed string
 */

int _printf(const char *format, ...)
{
	va_list list;
	char *buffer = malloc (2048);
	unsigned int cformat = 0, cfunc = 0, *size = 0, m = 0;
	fmt funcs[] ={
		{'c', print_char},
		{'i', print_int},
		{'s', print_str},
		{'d', print_dec},
		{'%', print_perc},
		{0, NULL}
	};

	size = &m;
	va_star (list, format);
	while (format[cformat])
	{
		if (format[cformat] == '%')
		{
			cformat++;
			cfunc = 0;
			while (funcs[cfunc])
			{
				if (format[cformat] == funcs[cfunc].identifs)
				{
					funcs[cfunc].print_funcs(list, buffer, *size);
					break;
				}
				cfunc++;
			}
		}
		else
		{
			buffer[*size] = format[cformat];
			*size++;
		}
		cformat++;
	}
	write(1, buffer, *size);
	free(buffer);
	return(*size);
}
