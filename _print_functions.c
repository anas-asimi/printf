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
 * @s: s.
 * Return: 1.
 */
int print_string(char *s)
{
	int i = 0;

	if (s == NULL)
		return (print_string("(null)"));

	while (s[i])
		_putchar(s[i++]);

	return (i);
}

/**
 * print_number - function.
 * @n: n.
 * Return: 1.
 */
int print_number(int n)
{
	int x;
	int printed_characters = 0;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		printed_characters++;
		x = -n;
	}
	if (x >= 10)
		printed_characters += print_number(x / 10);
	_putchar(x % 10 + '0');
	printed_characters++;
	return (printed_characters);
}

/**
 * print_unsigned - function.
 * @n: n.
 * Return: 1.
 */
int print_unsigned(unsigned long int n)
{
	unsigned long int x;
	int printed_characters = 0;

	x = n;
	if (x >= 10)
		printed_characters += print_unsigned(x / 10);
	_putchar(x % 10 + '0');
	printed_characters++;
	return (printed_characters);
}

/**
 * print_binary - function.
 * @n: n.
 * Return: 1.
 */
int print_binary(unsigned long int n)
{
	int printed_characters = 0;
	int x;

	x = n % 2;
	n = (n - x) / 2;
	if (n > 0)
		printed_characters += print_binary(n);
	_putchar(x + '0');
	printed_characters++;
	return (printed_characters);
}
