#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * _printf - prints to standard output
 *@format: Character for formatting
 *
 * Return: Number of characters printed out
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int characterCount = 0;
	va_list args;
	/*void (*f)(va_list arg);*/
	(void) format;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			/*get_op(*format, args);*/
			if (get_op(*format, &args) == 0)
			{
				_putchar('%');
				_putchar(*format);
				/*characterCount += 2;*/
			}
			format++;
		}
		else
		{
		_putchar(*format);
		format++;
		characterCount++;											}
	}
	va_end(args);
=======
int characterCount = 0;
va_list args;
(void) format;
va_start(args, format);
>>>>>>> 334d6e2bd650d49c5bb33830f876af8a79f23a6e

while (*format)
{
if (*format == '%')
{
format++;
if (get_op(*format, &args) == 0)
{
_putchar('%');
_putchar(*format);
characterCount += 2;
}
format++;
}
else
{
_putchar(*format);
format++;
characterCount++;
}
}
va_end(args);
return (characterCount);
}
