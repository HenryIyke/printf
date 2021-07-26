#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <string.h>



void print_char(va_list *argargs)
{
	char print_char;

	print_char = va_arg(*argargs, int);
	_putchar(print_char);
}



void print_string(va_list *argargs)
{
	int i;
	char *print_string;

	print_string = va_arg(*argargs, char *);
	for (i = 0; print_string[i] != '\0'; i++)
        _putchar(print_string[i]);                         
	/*print_string+
	characterCount += strlen(print_string);		
	break;*/
}


void print_percent(va_list *argargs)
{
  (void)argargs;
		_putchar('%');
	  /*characterCount++;
	 break;*/
}

void print_decimal(va_list *argargs)
{
  int print_dec;

  print_dec = va_arg(*argargs, int);
    _putchar(print_dec);
}

void print_integer(va_list *argargs)
{
  int print_int;

  print_int = va_arg(*argargs, int);
  _putchar(print_int);
}
