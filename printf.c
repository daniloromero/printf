#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - gives format and print data
 * @format: string to print
 * Return: integer size of printed string
 */
int _printf(const char *format, ...)
{
	va_list list;
	char *buffer = malloc(1024);
	unsigned int cformat = 0, cfunc = 0, m = 0, *size = &m;
	fmt *dic_f = diccionary(); /*pointer to function for finding function */

	if (!buffer)
		return (-1);
	va_start(list, format);
	while (format && format[cformat])
	{
		if (format[cformat] == '%')
		{
			cformat++;
			cfunc = 0;
			while (dic_f[cfunc].identifs)
			{
				if (format[cformat] == dic_f[cfunc].identifs)
				{
					dic_f[cfunc].print_funcs(list, buffer, size);
					break;
				}
				cfunc++;
			}
			if (!dic_f[cfunc].identifs)
				unknown_i(format[cformat], buffer, size);
		}
		else
		{
			buffer[*size] = format[cformat];
			*size += 1;
		}
		cformat++;
	}
	buffer[*size] = '\0';
	write(1, buffer, *size);
	va_end(list);
	free(dic_f), free(buffer);
	return (*size);
}
