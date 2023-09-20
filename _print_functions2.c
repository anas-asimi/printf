#include "main.h"
#include <stddef.h>

/**
 * print_base16_lower - function.
 * @n: n.
 * Return: 1.
 */
int print_base16_lower(int n)
{
	int printed_characters = 0;
	int x;

	x = n % 16;
	n = (n - x) / 16;
	if (n > 0)
		printed_characters += print_base16_lower(n);
	if (x < 10)
		_putchar(x + '0');
	else
		_putchar((x - 10) + 'a');
	printed_characters++;
	return (printed_characters);
}

/**
 * print_base16_upper - function.
 * @n: n.
 * Return: 1.
 */
int print_base16_upper(int n)
{
	int printed_characters = 0;
	int x;

	x = n % 16;
	n = (n - x) / 16;
	if (n > 0)
		printed_characters += print_base16_upper(n);
	if (x < 10)
		_putchar(x + '0');
	else
		_putchar((x - 10) + 'A');
	printed_characters++;
	return (printed_characters);
}
