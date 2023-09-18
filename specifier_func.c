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
		return (-1);
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
 * Return: Always 0 on success
 */
int digit_handler(va_list args)
{
	int c;

	c = print_number(va_arg(args, int));
	return (c);
}
