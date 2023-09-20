#include "main.h"
/**
 * get_handler - handles character
 * @spec: the specifier
 *
 * Return: Returns a handler function
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
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_x},
		{NULL, NULL}
	};

	while (sp[i].specifier != NULL)
	{
		if (*(sp[i].specifier) == spec)
		{
			return (sp[i].handler);
		}
		i++;
	}
	return (NULL);
}
