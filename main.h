#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct func - Struct function
 *
 * @specifier: the format specifier eg 'c','s', '%'
 * @handler: The function pointer to handle the specifier
 */
typedef struct func
{
	char *specifier;
	int (*handler)(va_list);
} func_t;

/* get_handle*/
int (*get_handler(char spec))(va_list);

/* printfunc */
int _printf(const char *format, ...);
/* _putchar*/
int _putchar(char c);

/* functions.c*/
void _puts(char *str);
int print_int(int d);
int rev_string(char *s);
int print_rev(va_list list);


/* functions2.c*/
int _strlen(char *s);
int print_uhex(unsigned int num);
int print_uhex_upper(unsigned int num);
int print_un(unsigned int d);

/* specifier_func*/
int char_handler(va_list args);
int string_handler(va_list args);
int percent_handler(va_list args __attribute__((unused)));
int digit_handler(va_list args);
int print_b(va_list args);

/* specifier_func2*/
int print_u(va_list args);
int print_x(va_list args);
int print_x_upper(va_list args);
int print_o(va_list args);

#endif
