#include "main.h"
/**
 * _strlen - prints the length of a string. String
 * is considered an array ending with '\0'
 * @s: pointer to the we want to length of
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_uhex - prints num in hex format
 * @num: the num
 *
 * Return: the printed chars
 */
int print_uhex(unsigned int num)
{
	char hex[] = "0123456789abcdef";
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int x, i, j = 0;
	char buffer[64];
	unsigned int number = num;

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		x = number % 16;

		for (i = 0; i < 16; i++)
		{
			if (x == arr[i])
				buffer[j++] = hex[i];
		}
		number /= 16;
	}

	buffer[j] = '\0';
	rev_string(buffer);

	x = _strlen(buffer);
	return (x);
}

/**
 * print_uhex_upper - prints num in hex format in upper case
 * @num: the num
 *
 * Return: the printed chars
 */
int print_uhex_upper(unsigned int num)
{
	char hex[] = "0123456789ABCDEF";
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int x, i, j = 0;
	char buffer[64];
	unsigned int number = num;

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		x = number % 16;

		for (i = 0; i < 16; i++)
		{
			if (x == arr[i])
				buffer[j++] = hex[i];
		}
		number /= 16;
	}

	buffer[j] = '\0';
	rev_string(buffer);

	x = _strlen(buffer);
	return (x);
}

/**
 * print_un - prints decimal integer (unsigned)
 * @d: the integer
 *
 * Return: number of chars written
 */
int print_un(unsigned int d)
{
	char *buffer = NULL;
	unsigned int temp = d, size;
	unsigned int num_of_digits = 0;
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
