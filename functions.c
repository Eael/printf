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
	int l, l1;
	int i = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	l1 = i - 1;
	for (l = 0; l < i / 2; l++)
	{
		temp = s[l];
		s[l] = s[l1];
		s[l1--] = temp;
		_putchar(temp);
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse from args
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: number of bytes written
 */
int print_rev(va_list list)
{
	int count;
	char *str;

	str = va_arg(list, char *);

	count = rev_string(str);

	return (count);
}