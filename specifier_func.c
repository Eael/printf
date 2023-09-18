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
    char buffer[BUFFER_SIZE];
    int n = va_arg(args, int);
    int i = 0;
    int char_count = 0;

    if (n < 0)
    {
        _putchar('-');
        char_count++;
        n = -n;
    }

    do
    {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    } while (n > 0);

    for (i--; i >= 0; i--)
    {
        if (char_count == BUFFER_SIZE)
        {
            _print_buffer(buffer, BUFFER_SIZE, &char_count);
            i++;
            continue;
        }
        buffer[char_count++] = buffer[i];
    }

    _print_buffer(buffer, char_count, &char_count);

    return (char_count);
}