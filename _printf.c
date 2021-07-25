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
	long unsigned int i = 0;
	char *print_string;
	va_list ptr;

	va_start(ptr, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(ptr, int));
					characterCount++;
					break;
				case 's':
					print_string = va_arg(ptr, char *);
					for (i = 0; print_string[i] != '\0'; i++)
						_putchar(*print_string);
					format++;
					characterCount += strlen(print_string);
					break;
				case '%':
					_putchar('%');
					format++;
					characterCount++;
					break;
				case '\0':
					break;
				default:
					_putchar('%');
					_putchar(*format);
					format++;
					characterCount += 2;
			}
		}
		else
		{
			_putchar(*format);
			format++;
			characterCount++;
		}
	}
	va_end(ptr);

	return (characterCount);
}
