#include "main.h"
/**
 * print_u - prints decimal integer
 * @args: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_u(va_list args)
{
	unsigned int count;
	unsigned int num;

	num = va_arg(args, unsigned int);
	count = print_unsigned(num);

	return (count);
}

/**
 * print_x - prints hexidecimal integer
 * @args: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_x(va_list args)
{
	int count;
	int num;

	num = va_arg(args, unsigned int);

	count = print_uhex(num);

	return (count);
}

/**
 * print_x_upper - prints hexidecimal integer in upper case
 * @args: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_x_upper(va_list args)
{
	int count;
	int num;

	num = va_arg(args, unsigned int);

	count = print_uhex_upper(num);

	return (count);
}

/**
 * print_o - prints unsigned int in octal
 * @args: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_o(va_list args)
{
	int count = 0, j = 0;
	unsigned int num;
	char arr[64];

	num = va_arg(args, int);

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		arr[j++] = (num % 8) + '0';
		num /= 8;
	}
	arr[j] = '\0';

	count = (rev_string(arr));

	return (count);
}
