#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int chi = 0, len = 0;

	while (str[chi] != '\0')
	{
		chi++;
	}
	for (; len < chi; len += 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
