#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - prints to standard output
 *@format: Character for formatting
 *
 * Return: Number of characters printed out
 */

int _printf(const char *format, ...)
{
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
			get_op(*format, args);
			format++;
			if (get_op(*format, args) != 0)
			{
				_putchar('%');
				_putchar(*format);
				format++;
				/*characterCount += 2;*/
			}
		}
		else
		{
		_putchar(*format);
		format++;
		characterCount++;											}
	}
	va_end(args);

	return (characterCount);
}
