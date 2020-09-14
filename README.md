# _printf Project
[![Contributors][contributors-shield]][contributors-url]

<h1 align="center"> _printf Project </h1>

### Description
In _printf project we code from zero our own custom printf function. Native printf function allows you to print with certain formats. We handle most basic format so you can print chars, strings, positive and negative numbers, hex, octa and binary numbers among other formats.
You can see man 3 of printf to understand how printf works.

### Usage
Compile

	gcc -Wall -Werror -Wextra -pedantic *.c -o executable
Prototype

	int _printf(const char *format, ...)

Return

If everything is successful, the function returns the num of chars printed.

Format conversion
| Format      | Description |
| ----------- | ----------- |
| c  | Print char values |
| s  | Print strings |
| d, i  | Print numbers [positive and negative]|
| b  | Print nums converted to binary |
| u  | Print nums as unsigned int |
| o  | Print nums converted to octal |
| x  | Print nums converted to hexa [uppercase]|
| X  | Print nums converted to hexa [uppercase]|
| %% | Print % character |
| p | Print memory adress [pointers] |
| r | Print string in reverse |
| S | Print string and non-printable chars [\x + ASCII value in hexa] |
| R | Print in rot13 |


Examples
1. Print char values
- Input `_printf("%c", 'x')`
- Output: `x`
- Input `_printf("%c", 97)`
- Output: `a`
2. Print strings
- Input `_printf("Hello%s\n", " Holberton!")`
- Output: `Hello Holberton!`
3. Print numbers
- Input `_printf("%d", 1024)`
- Output: `1024`
- Input `_printf("%i", -2048)`
- Output: `-2048`
4. Print converted to binary
- Input `_printf("%b\n", 15)`
- Output: `1111`
5. Print as unsigned int
- Input `_printf("%u\n", 15)`
- Output: `15`
- Input `_printf("%u\n", -15)`
- Output: `4294967281`
6. Print converted to octal
- Input `_printf("%o\n", 15)`
- Output: `17`
7. Print converted to hexa (lower and uppercase)
- Input `_printf("%x\n", 30)`
- Output: `1e`
- Input `_printf("%X\n", 30)`
- Output: `1E`
8. Print %
- Input `_printf("%%\n")`
- Output: `%`
- Input `_printf("%%-%%\n")`
- Output: `%-%`
9. Print memory adress [pointers]
- Input `_printf("%p\n", ptr)`
- Output: `0x7ffe637541f0`
10. Print string in reverse
- Input `_printf("Holberton - %r\n", "Holberton")`
- Output: `Holberton - notrebloH`
11.  Print string and non-printable chars
- Input `_printf("%S\n", "Holberton\nSchool")`
- Output: `Holberton\x0ASchool`
12.  Print in rot13
- Input `_printf("%R\n", "Holberton")`
- Output: `Ubyoregba`


#### Authors
* Anderson Castiblanco [Github](https://github.com/andergcp) - [LinkedIn](https://www.linkedin.com/in/andergcp)
* Danilo Romero - [Github](https://github.com/daniloromero) - [LinkedIn](https://www.linkedin.com/in/danilo-romero-beltran/)

[contributors-shield]: https://img.shields.io/github/contributors/andergcp/AirBnB_clone?style=social&logo=appveyor
[contributors-url]: https://github.com/andergcp/printf/graphs/contributors