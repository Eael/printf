#include "main.h"
/**
 * get_handler - handles character
 * @specifier: the specifier
 * @va_list: the format specifier eg 'c','s', "%"
 *
 * Return: Always 0 on success
 */
int (*get_handler(char spec))(va_list)
{
	int i = 0;

	func_t sp[] = {
		{"c", char_handler},
		{"%", percent_handler},
		{"s", string_handler},
		{"d", digit_handler},
		{"i", digit_handler},
		{NULL, NULL}
	};

	while (sp[i].specifier != NULL)
	{
		if (*(sp[i].specifier) == spec)
		{
			return (sp[i].handler);
		}
	}
	return (NULL);
}
