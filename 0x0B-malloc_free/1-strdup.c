#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter
 * @str: The string to be copied
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int ind, len = 0;
	if (str == NULL)
		return (NULL);

	for (ind = 0; str[ind]; ind++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (ind = 0; str[ind]; ind++)
		duplicate[ind] = str[ind];

	duplicate[len] = '\0';

	return (duplicate);
}
