#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>

typedef struct format_funcs
{
	char identifs;
	void (*print_funcs)(va_list list, char *buffer, unsigned int *size);
}fmt;

int _printf(const char *format, ...);
void print_char(va_list list, char *buffer, unsigned int *size);
void print_int(va_list list, char *buffer, unsigned int *size);
void print_str(va_list list, char *buffer, unsigned int *size);
void print_dec(va_list list, char *buffer, unsigned int *size);
void print_perc(va_list list, char *buffer, unsigned int *size);

#endif
