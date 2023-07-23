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
i++;
if (format[i] == '%')
{
length += _putchar(format[i]);
i++;
}
else
{
m = get_specifier(format[i]);
if (m)
length += m(args);
else
length = _putchar(format[i]) + _putchar(format[i + 1]);
i++;
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
