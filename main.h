#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);

/**
 * struct format_specifier - A struct to handle format specifiers.
 * @spc: work as validator of presented specifier.
 * @f: function pointer.
 */
struct format_specifier
{
char *spc;
int (*f)(va_list);
};

typedef struct format_specifier specifier;

int (*get_specifier(char c))(va_list);

int print_char(va_list args);

int print_string(va_list args);

int print_percent(va_list args);

int print_decimal(va_list args);

int print_binary(va_list args);

int print_unsigned_int(va_list args);

int print_octal(va_list args);

int print_hex_lower(va_list args);

int print_hex_upper(va_list args);

int _printf(const char *format, ...);

#endif
