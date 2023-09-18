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
	int res = (write(1, &c, 1));

	if (res < 0)
	{
		return (-1);
	}
	return (res);
}


/**
 * _puts - prints all of string
 * @str: pointer to the string
 *
 * Return: number of chars written
 */
int _puts(char *str)
{
	int i; 

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}


/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
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
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
