#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * 		followed by a new line
 * followed by a new line
 * @a: The array of integers
 * @n: The number of elements to be printed
 */
void print_array(int *a, int n)
{
	int ind;
	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);
		if (ind == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
