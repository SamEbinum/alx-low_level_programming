#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * print_error - prints "Error" to stdout and exits with status 98
 */
void print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char **argv)
{
    int i, j, len1, len2, carry, sum;
    int *result;
    
    if (argc != 3)
        print_error();

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (!_isdigit(argv[i][j]))
                print_error();
        }
    }

    len1 = strlen(argv[1]);
    len2 = strlen(argv[2]);
    result = calloc(len1 + len2, sizeof(int));

    if (!result)
        return (1);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            sum = (argv[1][i] - '0') * (argv[2][j] - '0') + result[i + j + 1] + carry;
            result[i + j + 1] = sum % 10;
            carry = sum / 10;
        }
        result[i + j + 1] = carry;
    }

    i = 0;
    while (i < len1 + len2 - 1 && result[i] == 0)
        i++;

    while (i < len1 + len2)
        putchar(result[i++] + '0');

    putchar('\n');
    free(result);
    return (0);
}

