#include <stdio.h>                                                              

/**
 * main - Prints all the numbers of base 16 in lowercase                         *                                                                               * Return: Always 0                                                              */                                                                             int main(void)                                                                  {                                                                                        int a;                                                                          char l; 
 * main - Prints all the numbers of base 16 in lowercase                         *                                                                               * Return: Always 0                                                              */
int main(void)
{
	int a;
	char l;

	 for (a = 0; a < 10; a++)
		 putchar((a % 10) + '0');
