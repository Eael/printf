This is the implementation of the printf function.
It will consist solely on the use of stdarg.h, stdio.h and stdlib.h libraries
The allowed functions are write, malloc, free, va_start, va_end, va_copy and va_arg
Create a test folder to contain all main.c test files
We are handling the following conversion specifiers c, s, %, d and i
Files to use
main.h - header file
functions.c - file containing possible functions
get_specifier.c - contains function to select specifier.

Pseudo-Code
#file - get_specifier.c
prototype int _printf(const char *format, ...);
declare int i = 0, len;
va_list list;
va_start (list, format);
while (*format)
	i++
for (len = 0; len < i; len++)
	if *format != '%'
		putchar(format[len]);
	else
		goto (len + 1)
		get_specifier(len+1);

file - main.h
declare struct print {
	char *p
	void (*f)(int)
}
if %c - print a single character(putchar)
if %s - print a string (3-puts in 0x05)
if %% - print a percent sign (putchar (%))
if %d - print a decimal number (6-print_numberz in 0x01)
if %i - print an integer in base 10 (101-print_number in 0x04)

file - functions.c 
Contains the actual functions for the following:
putchar
3-puts in 0x05
6-print_numberz in 0x01
101-print_number in 0x04

int height = 100
int weight = 200

printf("Abeku is %a girl %c", height, weight);
c, s, %
Pseudo code.. Plan
int _printf(const char *format, ...)
Whenever you call _printf
int i = 0;
while (*format or format[i] != '\0')
	Do the following
	if we see % in the string
		then go to the next character (i + 1)
			if (i + 1 == c)
				then input _putchar function (va_arg)
			else if (i + 1 == s)
				then input puts(without newline) (va_arg)
			else if (i + 1 == %)
				then _putchar("%")
			else 
				_puts("ERROR")
