#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>

/**
 * struct format_funcs - Used to identify formats and its functions
 * @identifs: Char to identify the required function
 * @print_funcs: Pointer to the function required for indentifs.
 */
typedef struct format_funcs
{
	char identifs;
	void (*print_funcs)(va_list list, char *buffer, unsigned int *size);
} fmt;

int _printf(const char *format, ...);
void print_char(va_list list, char *buffer, unsigned int *size);
void print_int(va_list list, char *buffer, unsigned int *size);
void print_str(va_list list, char *buffer, unsigned int *size);
void print_dec(va_list list, char *buffer, unsigned int *size);
void print_perc(va_list list, char *buffer, unsigned int *size);
fmt *diccionary();
void unknown_i(char p, char *buffer, unsigned int *size);
void print_binary(va_list list, char *buffer, unsigned int *size);
void print_unsignedint(va_list list, char *buffer, unsigned int *size);
void print_octal(va_list list, char *buffer, unsigned int *size);

#endif
