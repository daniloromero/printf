#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdarg.h>
#include <stdlib>

typedef struct format_funcs
{
	char identifs;
	void (*print_funcs)(va_list, char *, unsigned int *);
}fmt;

void print_char(va_list list, char *buffer, unsigned int *size);
void print_int(va_list list, char *buffer, unsigned int *size);
void print_str(va_list list, char *buffer, unsigned int *size);
void print_dec(va_list list, char *buffer, unsigned int *size);
void print_perc(va_list list, char *buffer, unsigned int *size);

#endif
