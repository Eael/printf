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
	int i, char_count = 0;
	va_list args;
	int (*function)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ' || format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			i++;
			function = get_handler(format[i]);
			if (function != NULL)
				char_count += function(args);
			else
			{
				_putchar('%');
				char_count++;
			}
		}
	}
	va_end(args);
	return (char_count);
}
