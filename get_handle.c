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
	int i;

	func_t sp[] = {
		{"c", char_handler},
		{'%', percent_handler},
		{"s", string_handler},
		{NULL, NULL}
	};

	while (sp[i].specifier != NULL)
	{
		if (_strcmp(sp[i].specifier, spec) == 0)
		{
			return (sp[i].handler);
		}
		i++;
	}
	return (NULL);
}