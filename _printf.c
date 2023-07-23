#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function that work as simple printf
 * that supports %c, %s, and %%.
 * @format: A pointer to character string containing the format specifiers.
 *
 * Return: An integer as number of printed characters.
 */
int _printf(const char *format, ...)
{
int i, length, (*m)(va_list);
va_list args;

if (format == NULL)
return (-1);
else
{
length = 0, i = 0;
va_start(args, format);
if (format[0] == '%' && format[1] == '\0')
return (-1);
while (format != NULL && format[i] != '\0')
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
length += _putchar(format[i]);
i+=2;
}
else
{
m = get_specifier(format[i + 1]);
if (m)
length += m(args);
else
length = _putchar(format[i]) + _putchar(format[i + 1]);
i+=2;
}
}
else
{
length += _putchar(format[i]);
i++;
}
}
va_end(args);
return (length);
}
}
