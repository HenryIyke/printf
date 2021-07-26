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

/**
 * print_decimal - prints to standard output
 * @argargs: Character for formatting
 *
 */
void print_decimal(va_list *argargs)
{
int res, temp, expo, num;
num = va_arg(*argargs, int);
expo = 1;
/*Check negatives*/
if (num >= 0)
res = num * -1;
else
{
res = num;
_putchar('-');
}
/*Initialize exponent variable*/
temp = res;
while (temp <= -10)
{
expo *= 10;
temp /= 10;
}
/*Main */
while (expo >= 1)
{
_putchar(((res / expo) % 10) * -1 + '0');
expo /= 10;
}
}

/**
 * print_integer - prints to standard output
 * @argargs: Character for formatting
 *
 */
void print_integer(va_list *argargs)
{
int res, temp, expo, num1;
num1 = va_arg(*argargs, int);
expo = 1;
/*Check negatives*/
if (num1 >= 0)
res = num1 * -1;
else
{
res = num1;
_putchar('-');
}
/*Initialize exponent variable*/
temp = res;
while (temp <= -10)
{
expo *= 10;
temp /= 10;
}
/*Main */
while (expo >= 1)
{
_putchar(((res / expo) % 10) * -1 + '0');
expo /= 10;
}
}
