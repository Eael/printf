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

/**
 * rev_string - prints a string in reversee
 * @s: pointer to the string  we want to reverse
 *
 * Return: number of bytes written
 */
int rev_string(char *s)
{
	int i, n = 0;

	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (n);
}

/**
 * print_rev - prints a string in reverse from args
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: number of bytes written
 */
int print_rev(va_list args)
{
	int count;
	char *str;

	str = va_arg(args, char *);

	count = rev_string(str);

	return (count);
}

/**
 * print_unsigned - prints decimal integer (unsigned)
 * @d: the integer
 *
 * Return: number of chars written
 */
int print_unsigned(unsigned d)
{
	char *buffer = NULL;
	unsigned int temp = d, size;
	int num_of_digits = 0;
	int i;
	unsigned int num;

	if (d == 0)
		return (_putchar('0'));

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

	_puts(buffer);
	free(buffer);

	return (num_of_digits);
}
