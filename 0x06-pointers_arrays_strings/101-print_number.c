#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer.
 * Return: no return.
 * @n: input number
 */
void print_number(int n)
{
	unsigned int m, d, count;
	unsigned int n1;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	} 
		n1 = -n;
		_putchar('-');
	}	
	else
	{
		m = n;
		n1 = n;
	}

	d = m;
	count = 1;
	if (n1 / 10)
		print_number(n1 / 10);

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
	_putchar((n1 % 10) + '0');
}
