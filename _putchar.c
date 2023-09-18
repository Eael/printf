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
        int res = (write(1, &c, 1));

        if (res < 0)
        {
                return (-1);
        }
        return (res);
}
