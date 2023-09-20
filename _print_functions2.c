#include "main.h"

/**
 * print_octal - function.
 * @n: n.
 * Return: 1.
 */
int print_octal(unsigned long int n)
{
	int printed_characters = 0;
	unsigned long int x;

	x = n % 8;
	n = (n - x) / 8;
	if (n > 0)
		printed_characters += print_octal(n);
	_putchar(x + '0');
	printed_characters++;
	return (printed_characters);
}

/**
 * print_base16_lower - function.
 * @n: n.
 * Return: 1.
 */
int print_base16_lower(unsigned long int n)
{
	int printed_characters = 0;
	unsigned long int x;

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
int print_base16_upper(unsigned long int n)
{
	int printed_characters = 0;
	unsigned long int x;

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

/**
 * print_pointer - function.
 * @n: n.
 * Return: 1.
 */
int print_pointer(void *n)
{
	int printed_characters;

	if (n == NULL)
	{
		print_string("(nil)");
		return (5);
	}
	printed_characters = 2;
	print_string("0x");
	printed_characters += print_base16_lower((long long)n);
	return (printed_characters);
}
