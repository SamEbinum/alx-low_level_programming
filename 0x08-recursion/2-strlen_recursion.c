#include <stdio.h>

/**
 * str_length - Returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int str_length(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    char *my_string = "Hello, world!";
    int length = str_length(my_string);

    printf("The length of the string is %d\n", length);

    return (0);
}

