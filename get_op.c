#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>



int get_op(const char s, void *args)
{
	printer_t funcs[] = {
		{"c", print_char},
		{"s", print_string},			
		{"%", print_percent},
       		{NULL, NULL}
	  };

	int i;

	i = 0;
	while (funcs[i].symbol != NULL)
{
	if ((s) == (*(funcs + i) -> symbol))
	{
		(funcs[i].print(args));
		break;
	}
	i++;
}
return (0);
}
