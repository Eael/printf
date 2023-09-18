#include "main.h"
/**
 * char_handler - handles character
 * @va_list: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int char_handler(va_list args)
{
	_putchar(va_arg(args, int));
	return (0);
}

/**
 * string_handler - handles string
 * @va_list: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int string_handler(va_list args)
{
	_puts(va_arg(args, char *));
	return (0);
}

/**
 * percent_handler - handles character
 * @va_list: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int percent_handler(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (0);
}

/**
 * char_handler - handles character
 * @va_list: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int digit_handler(va_list args)
{
	print_number(va_arg(args, int));
	return (0);
}
