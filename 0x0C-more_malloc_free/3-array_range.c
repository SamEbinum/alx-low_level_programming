#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 * from min to max, inclusive
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 */
int *array_range(int min, int max)
{
	int *array, ind, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (ind = 0; ind < size; ind++)
		array[ind] = min++;

	return (array);
}
