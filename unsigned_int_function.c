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
unsigned int n, tmp, pwr;
int count, digit;

n = va_arg(args, unsigned int);
count = 0, digit = 0;
if (n == 0)
{
count += _putchar('0');
return (1);
}
tmp = n;
while (tmp != 0)
{
tmp /= 10;
digit++;
}
pwr = 1;
while (--digit)
{
pwr *= 10;
}
while (pwr > 0)
{
count += _putchar((n / pwr) +'0');
n %= pwr;
pwr /= 10;
}

return (count);
}
