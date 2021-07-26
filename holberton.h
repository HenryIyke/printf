#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <string.h>

/**
 * struct printer - A new struct type defining a printer
 * @symbol: A symbol representing a data type
 * @print: A pointer to that prints a data type corresponding to symbol
 *
 */


typedef struct printer
{
char *symbol;
void (*print)(va_list *arg);
} printer_t;

int _putchar(char);
int _printf(const char *format, ...);
void print_char(va_list *arg);
void print_string(va_list *arg);
void print_percent(va_list *arg);
void print_break(va_list *arg);
int get_op(const char s, void *args);

#endif
