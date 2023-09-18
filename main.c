#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    char c = 'a';
    char str[] = "I live and love";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len, len2);
    _printf("Negative:[%s]\n", str);
    _printf("character %c\n", c);
    _printf("percentage %% nd string %s \n", str);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d, %i]\n", len, len);
    
    return (0);
}
