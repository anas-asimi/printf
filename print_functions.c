#include "main.h"

/**
 * print_character - function.
 * @c: c.
 * Return: 1.
 */
int print_character(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_string - function.
 * @c: c.
 * Return: 1.
 */
int print_string(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);

	return (i);
}
