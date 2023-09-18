#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - prints every other string
 * @str: pointer to the string
 *
 * Return: string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}


/**
 * _print_buffer - prints a buffer to stdout
 * @buf: the buffer to print
 * @size: the size of the buffer
 * @char_count: pointer to the character count
 */
void _print_buffer(char *buf, int size, int *char_count)
{
    write(1, buf, size);
    *char_count += size;
}


