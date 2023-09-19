#include "main.h"
#include <unistd.h>

/**
 * _puts - prints all of string
 * @str: pointer to the string
 *
 * Return: string
 */
void _puts(char *str)
{
	if (str == NULL)
	{
		return;
	}

	while (*str)
	{
		_putchar(*str);
		str++;
	}
}


/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
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

/**
 * print_int - prints decimal integer
 * @d: the integer
 *
 * Return: number of chars written
 */
int print_int(int d)
{
	char *buffer = NULL;
	int temp = d, size;
	int num_of_digits = 0;
	int i, j = 0;
	unsigned int num;

	if (d == 0)
		return (_putchar('0'));

	if (d < 0)
	{
		j = 1;
		d *= -1;
	}
	num = d;
	while (temp != 0)
	{
		num_of_digits++;
		temp /= 10;
	}
	size = num_of_digits + 1;
	buffer = malloc(sizeof(char) * (size));
	if (!buffer)
		return (-1);
	for (i = size - 2; i >= 0; i--)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
	}
	buffer[size - 1] = '\0';
	if (j == 1)
	{
		_putchar('-');
		num_of_digits++;
	}
	_puts(buffer);
	free(buffer);

	return (num_of_digits);
}
