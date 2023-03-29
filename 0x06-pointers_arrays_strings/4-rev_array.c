#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, ind;

	for (ind = n - 1; ind >= n / 2; ind--)
	{
		tmp = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = tmp;
	}
}
