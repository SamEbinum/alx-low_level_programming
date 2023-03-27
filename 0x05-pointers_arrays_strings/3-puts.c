1 #include "main.h"
2
3 /**
4  * _puts - prints a string followed by a new line
5  * @str: The string to be printed
6 */
7 void _puts(char *str)
8 {
9	while (*str)
10		_putchar(*str++);
11
12	_putchar('\n');
13 }
#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
