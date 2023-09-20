#include "main.h"
/**
 * char_handler - handles character
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int char_handler(va_list args)
{
	int c;

	c = _putchar(va_arg(args, int));
	return (c);
}

/**
 * string_handler - handles string
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int string_handler(va_list args)
{
	int c = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}
	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	return (c);
}

/**
 * percent_handler - handles character
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int percent_handler(va_list args __attribute__((unused)))
{
	int c;

	c = _putchar('%');
	return (c);
}

/**
 * digit_handler - prints an integer
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: number of bytes written
 */
int digit_handler(va_list args)
{
	int counter;

	counter = print_int(va_arg(args, int));
	return (counter);
}

/**
 * print_b - prints unsigned int in binary
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: number of bytes written
 */
int print_b(va_list args)
{
	int i, counter = 0;
	unsigned int num;
	char bin[64];

	num = va_arg(args, int);
	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		bin[i] = (num % 2) + '0';
		num /= 2;
	}
	bin[i] = '\0';
	counter = rev_string(bin);

	return (counter);
}
