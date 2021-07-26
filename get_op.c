#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op - prints to standard output
 * @s: Character for formatting
 * @args: Character for formatting
 * Return: This determines the success or failure of the function.
 */


int get_op(const char s, void *args)
{
printer_t funcs[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_decimal},
{"i", print_integer},
{NULL, NULL}
};

int i;
i = 0;

while (funcs[i].symbol != NULL)
{
if ((s) == (*(funcs + i)->symbol))
{
(funcs[i].print(args));
return (1);
}
i++;
}
return (0);
}
