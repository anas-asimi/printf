#include "main.h"
#include <stdio.h>

/**
 * _printf - Printf function
 * @format: format.
 * Return: Number of printed chars.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int characters_printed = 0;

	while (format[i])
	{
		putchar(format[i]);
		i++;
		characters_printed++;
	}

	return (1);
}
