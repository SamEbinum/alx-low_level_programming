#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Arguments
 * @argv: Array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b = 0;

	while (b < argc)
	{
		printf("%s\n", argv[b]);
		b++;
	}
	return (0);
}
