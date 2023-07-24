#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_specifier - A pointer function.
 * @c: A character as parameters.
 *
 * Return: An integer.
 */
int (*get_specifier(char c))(va_list)
{
int i;
specifier arr[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_decimal},
{"i", print_decimal},
{"b", print_binary},
{"u", print_unsigned_int},
{"o", print_octal},
{"x", print_hex_lower},
{"X", print_hex_upper},
{NULL, NULL}};

i = 0;
while (arr[i].spc)
{
if (c == arr[i].spc[0])
{
return (arr[i].f);
}
i++;
}
return (NULL);
}
