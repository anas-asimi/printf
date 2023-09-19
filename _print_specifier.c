#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_specifier - print a specifier.
 * @specifier: specifier
 * Return: number of caracters printed.
 */
int _print_specifier(char *specifier, va_list list, int arg_index)
{
	int len;
	char type;
	int flags;

	len = _strlen(specifier);
	type = specifier[len - 1];
	flags = _get_flags(specifier);
	/*
	printf("\n===================>	specifier is	: '%s'\n", specifier);
	printf("===================>	len is		: %d\n", len);
	printf("===================>	type is		: %c\n", type);
	*/

	if (type == 'c')
		return (print_character(va_arg(list, int)));

	return (1);
}
