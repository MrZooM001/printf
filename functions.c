#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Print a single character that passed as a parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer..
 */
int print_char(va_list args)
{
int n;

n = va_arg(args, int);
return (_putchar(n));
}

/**
 * print_string - Print a string that passed as parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer..
 */
int print_string(va_list args)
{
int i, length;
char *str;

i = 0, length = 0;
str = va_arg(args, char *);
if (str == NULL)
{
str = "(null)";
}
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
length++;
}
return (length);
}

/**
 * print_percent - Print % that passed as a parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer..
 */
int print_percent(va_list args)
{
char *str;

str = "%";
if (va_arg(args, int) == *str)
{
return (*str);
}
return (*str);
}

/**
 * print_decimal - Print an integer in decimal that passed as a parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer.
 */

int print_decimal(va_list args)
{
int n;
unsigned int absolute, count, div;

count = 0;
n = va_arg(args, int);
if (n < 0)
{
absolute = (-n);
count += _putchar('-');
}
else
{
absolute = n;
}

div = 1;
while (absolute / div > 9)
{
div *= 10;
}

while (div > 0)
{
count += _putchar((absolute / div) +'0');
absolute %= div;
div /= 10;
}

return (count);
}

/**
 * print_binary - Convert an integer to a binary & Print it.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: An integer.
 */

int print_binary(va_list args)
{
unsigned int n, mask;
int count, zeros;

count = 0, zeros = 1;
n = va_arg(args, unsigned int);
mask = 1 << (sizeof(unsigned int) * 8 - 1);
for (; mask != 0; mask >>= 1)
{
if ((n & mask) != 0)
{
zeros = 0;
count += _putchar('1');
}
else
{
if (zeros == 0)
{
count += _putchar('0');
}   
}
}
if (zeros != 0)
{
count += _putchar('0');
}

return (count);
}
