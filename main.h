#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct func - Struct function
 *
 * @specifier: the format specifier eg 'c','s', "%"
 * @handler: The function pointer to handle the specifier
 */
typedef struct func
{
	char *specifier;
	int (*handler)(va_list);
} func_t;

int _printf(const char *format, ...);

int _putchar(char c);
void _puts(char *str);
void print_number(int n);

#endif