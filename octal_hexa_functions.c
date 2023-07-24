#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_octal - Convert an integer to an octal & Print it.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer.
 */
int print_octal(va_list args)
{
unsigned int n;
int i, count;
char buffer[23];

count = 0, i = 22;
n = va_arg(args, unsigned int);
if (n == 0)
{
count += _putchar('0');
}
else
{
while (n > 0)
{
buffer[--i] = (n % 8) + '0';
n /= 8;
}
while (i < 22)
{
count += _putchar(buffer[i++]);
}
}

return (count);
}


/**
 * print_hex_lower - Convert an integer to a lower hexadecimal & Print it.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer.
 */
int print_hex_lower(va_list args)
{
unsigned int n;
int i, count, rem;
char buffer[9];

count = 0, i = 8;
n = va_arg(args, unsigned int);
if (n == 0)
{
count += _putchar('0');
}
else
{
while (n > 0)
{
rem = n % 16;
if (rem < 10)
{
buffer[--i] = rem + '0';
}
else
{
buffer[--i] = rem - 10 + 'a';
}
n /= 16;
}
while (i < 8)
{
count += _putchar(buffer[i++]);
}
}
return (count);
}

/**
 * print_hex_upper - Convert an integer to an uppercase hexadecimal & Print it.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer.
 */
int print_hex_upper(va_list args)
{
unsigned int n;
int i, count, rem;
char buffer[9];

count = 0, i = 8;
n = va_arg(args, unsigned int);
if (n == 0)
{
count += _putchar('0');
}
else
{
while (n > 0)
{
rem = n % 16;
if (rem < 10)
{
buffer[--i] = rem + '0';
}
else
{
buffer[--i] = rem - 10 + 'A';
}
n /= 16;
}
while (i < 8)
{
count += _putchar(buffer[i++]);
}
}
return (count);
}
