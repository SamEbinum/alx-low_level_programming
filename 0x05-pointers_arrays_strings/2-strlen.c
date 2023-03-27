#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of
 * @s: The string to get the length of
 *
 * Return: length of the @str
 * Return: length of the @s
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}
