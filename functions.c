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
return (putchar(n));
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
putchar(str[i]);
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
