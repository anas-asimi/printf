#include "main.h"
#include <stdio.h>

/**
 * print_specifier - print a specifier.
 * @specifier: specifier
 * Return: number of caracters printed.
 */
int _print_specifier(char *specifier, ...)
{
	int len;
	char type;

	len = _strlen(specifier);
	type = specifier[len - 1];
	/*
	printf("\n===================>	specifier is	: '%s'\n", specifier);
	printf("===================>	len is		: %d\n", len);
	printf("===================>	type is		: %c\n", type);
	*/
	switch (type)
	{
	case 'c':
		return (print_character(type, 0));
		break;
	default:
		break;
	}

	return (1);
}
