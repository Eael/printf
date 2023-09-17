#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - prints every other string
 * @str: pointer to the string
 *
 * Return: string
 */
void _puts(char *str)
{
	int l;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < i; l += 2)
	{
		_putchar(str[l]);
	}
}


/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
int print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
