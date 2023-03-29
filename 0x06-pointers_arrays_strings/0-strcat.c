#include "main.h"
#include <stdio.h>

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 * _strcat - Concatenates the string pointed to by @src, including the terminating
 * null byte, to the end of the string pointed to by @dest
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int ind = 0, dest_len = 0;
	while (dest[ind++])
		dest_len++;
	for (ind = 0; src[ind]; ind++)
		dest[dest_len++] = src[ind];
	return (dest);
}
