#include "main.h"
/**
 * _printf - handles character
 * @format: the format specifier eg 'c','s', "%"
 * @...: variadic parameters
 *
 * Return: Always 0 on success
 */
int _printf(const char *format, ...)
{
	int i = 0, char_count = 0;
	va_list args;
	int (*function)(va_list);

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == ' ' || format[i + 1] == '\0')
			{
				return (-1);
			}
			i++;
			function = get_handler(format[i]);

			if (function != NULL)
			{
				char_count += function(args);
				i++;
				continue;
			}
			else
			{
				_putchar('%');
				char_count++;
				continue;
			}
		}
	}
	va_end(args);
	return (char_count);
}
