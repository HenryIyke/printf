#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <string.h>

/**
 * print_char - prints to standard output
 * @argargs: Character for formatting
 *
 */

void print_char(va_list *argargs)
{
char print_char;
print_char = va_arg(*argargs, int);
_putchar(print_char);
}

/**
 * print_string - prints to standard output
 * @argargs: Character for formatting
 *
 */
void print_string(va_list *argargs)
{
int i;
char *print_string;
print_string = va_arg(*argargs, char *);
for (i = 0; print_string[i] != '\0'; i++)
_putchar(print_string[i]);
}

/**
 * print_percent - prints to standard output
 * @argargs: Character for formatting
 *
 */
void print_percent(va_list *argargs)
{
(void)argargs;
_putchar('%');
}
