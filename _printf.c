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

	while (format[i])
		putchar(format[i++]);

	return (1);
}
