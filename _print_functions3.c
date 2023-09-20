#include "main.h"

/**
 * print_string - function.
 * @s: s.
 * Return: 1.
 */
int print_rot13string(char *s)
{
	int i;
	char c;

	i = 0;
	if (s == NULL)
		return (print_string("(null)"));
	while (s[i])
	{
		c = s[i++];
		if (c >= 'A' && c <= 'Z')
		{
			if ((c + 13) <= 'Z')
				_putchar(c + 13);
			else
				_putchar((c + 13) - 26);
		}
		else if (c >= 'a' && c <= 'z')
		{
			if ((c + 13) <= 'z')
				_putchar(c + 13);
			else
				_putchar((c + 13) - 26);
		}
		else
			_putchar(c);
	}

	return (i);
}
