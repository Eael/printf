#include "main.h"
/**
 * char_handler - handles character
 * @va_list: the format specifier eg 'c','s', "%"
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
		if (format[i] == "%")
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
				char_count++;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			i++
		}
	}
	va_end(args);
	
}
