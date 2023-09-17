#include "main.h"

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
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns positive or negative number
 */
int _strcmp(char *s1, char *s2)
{
	int res, i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
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
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
