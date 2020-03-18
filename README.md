# _printf project
## made for Holberton Software Engineering program

> Functions and macros allowed:

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

> Compilation way:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

> Format specifiers:

**Specifier - Type**

* c	    -
* i	    -
* s	    -
* d	    -
* %	    -
* b	    -
* u	    -
* o	    -
* x	    -
* X	    -

> File used for testing:
---

#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len, len2, num = -10, num2 = -10;
        unsigned int ui;
        void *addr;
        char *empty = NULL;
        char p = '\0';

        len = _printf("\"\\Let's try to printf a simple sentence.\n");
        len2 = printf("\"\\Let's try to printf a simple sentence.\n");
        ui = (unsigned int)INT_MAX + 1024;
        addr = (void *)0x7ffe637541f0;
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("String + Length:[%s, %i]\n", "\"\\Let's try to printf a simple sentence", len);
        printf("String + Length:[%s, %i]\n", "\"\\Let's try to printf a simple sentence", len);
        _printf("negative con d & i:[%d, %i]\n", num, num2);
        printf("negative con d & i:[%d, %i]\n", num, num2);
        _printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);
        _printf("Unsigned:[%u]\n", ui);
        printf("Unsigned:[%u]\n", ui);
        _printf("Unsigned octal:[%o]\n", ui);
        printf("Unsigned octal:[%o]\n", ui);
        _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
        printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        _printf("Address:[%p]\n", addr);
        printf("Address:[%p]\n", addr);
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        len = _printf("Percent:[%%%%]\n");
        len2 = printf("Percent:[%%%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Empty string:[%s]\n", empty);
        printf("Empty string printf original:[%s]\n", empty);
        _printf("Empty string:[%c]\n", p);
        printf("Empty string printf original:[%c]\n", p);
        _printf("int:[%i]\n", INT_MIN);
        printf("int:[%i]\n", INT_MIN);
        return (0);
}


---

> Authors:

[Danilo Romero] https://github.com/daniloromero
[Anderson Castiblanco] 