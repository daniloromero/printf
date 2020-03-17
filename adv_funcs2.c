#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * diccionary - Returns the required function
 * Return: pointer to function required
 */
fmt *diccionary()
{
	fmt *dic = malloc(sizeof(fmt) * 9);

	if (dic)
	{
		dic[0].identifs = 'c';
		dic[0].print_funcs = print_char;
		dic[1].identifs = 'i';
		dic[1].print_funcs = print_int;
		dic[2].identifs = 's';
		dic[2].print_funcs = print_str;
		dic[3].identifs = 'd';
		dic[3].print_funcs = print_dec;
		dic[4].identifs = '%';
		dic[4].print_funcs = print_dec;
		dic[5].identifs = 'b';
		dic[5].print_funcs = print_binary;
		dic[6].identifs = 'u';
		dic[6].print_funcs = print_unsignedint;
		dic[7].identifs = 'o';
		dic[7].print_funcs = print_octal;
		dic[8].identifs = 0;
		dic[8].print_funcs = NULL;
		return (dic);
	}
	return (NULL);
}

/**
 * unknown_i - stores unknown identifiers in buffer
 * @p: char to print
 * @buffer: Pointer to a buffer that stores chars to print
 * @size: Pointer to a variable that counts the position in buffer
 */
void unknown_i(char p, char *buffer, unsigned int *size)
{
	buffer[*size] = '%';
	*size += 1;
	buffer[*size] = p;
	*size += 1;
}
