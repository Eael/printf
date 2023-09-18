#include "main.h"
/**
 * char_handler - handles character
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int char_handler(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * string_handler - handles string
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int string_handler(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (!str)
		str = ("(null)");

	return (_puts(str));
}

/**
 * percent_handler - handles character
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int percent_handler(va_list args)
{
	(void)args;

	return (_putchar('%'))
}

/**
 * digit_handler - prints an integer
 * @args: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int digit_handler(va_list args)
{
	print_number(va_arg(args, int));
	return (0);
}
