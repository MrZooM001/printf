#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_unsigned_int - Print an unsigned integer.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer.
 */
int print_unsigned_int(va_list args)
{
unsigned int n, div;
int count;

div = 1;
n = va_arg(args, unsigned int);
while ((n / div) > 9)
{
div *= 10;
}
while (div > 0)
{
count += _putchar((n / div) +'0');
n %= div;
div /= 10;
}

return (count);
}
