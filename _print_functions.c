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
	int i;

	i = 0;
	if (s == NULL)
		return (print_string("(null)"));

	while (s[i])
		_putchar(s[i++]);

	return (i);
}

/**
 * print_non_printable - function.
 * @s: s.
 * Return: 1.
 */
int print_non_printable(char *s)
{
	int i;
	int printed_characters;

	i = 0;
	printed_characters = 0;
	if (s == NULL)
		return (print_string("(null)"));
	while (s[i])
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (s[i]<16)
			{
				_putchar('0');
				printed_characters++;
			}
			printed_characters += 2;
			printed_characters += print_base16_upper(s[i]);
			i++;
		}
		else
		{
			_putchar(s[i]);
			i++;
			printed_characters++;
		}
	}

	return (printed_characters);
}

/**
 * print_number - function.
 * @n: n.
 * Return: 1.
 */
int print_number(int n)
{
	int x;
	int printed_characters;

	printed_characters = 0;
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
 * print_unsigned_int - function.
 * @n: n.
 * Return: 1.
 */
int print_unsigned_int(unsigned int n)
{
	unsigned int x;
	int printed_characters;

	printed_characters = 0;
	x = n;
	if (x >= 10)
	{
		printed_characters += print_unsigned_int(x / 10);
	}
	_putchar(x % 10 + '0');
	printed_characters++;
	return (printed_characters);
}
