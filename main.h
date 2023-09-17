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

int (*get_handler(char spec))(va_list);
int _printf(const char *format, ...);

int _putchar(char c);
void _puts(char *str);
void print_number(int n);

int char_handler(va_list args);
int string_handler(va_list args);
int percent_handler(va_list args __attribute__((unused)));
int digit_handler(va_list args);

#endif