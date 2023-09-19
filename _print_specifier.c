#include "main.h"
#include <stdarg.h>

/**
 * print_specifier - print a specifier.
 * @specifier: specifier
 * Return: number of caracters printed.
 */
int _print_specifier(char *specifier, va_list *list)
{
	int len;
	char type;
	/*
	int flags;
	*/

	len = _strlen(specifier);
	type = specifier[len - 1];
	/*
	printf("\n===================>	specifier is	: '%s'\n", specifier);
	printf("===================>	type is		: %c\n", type);
	*/
	/*
	flags = _get_flags(specifier);
	*/
	if (type == 'c')
		return (print_character(va_arg(*list, int)));
	if (type == 's')
		return (print_string(va_arg(*list, char *)));
	return (1);
}
