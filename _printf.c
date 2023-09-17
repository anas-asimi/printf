#include "main.h"
#include <stdio.h>
#include "_get_specifier.c"
#include "_strlen.c"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Number of printed chars.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char c;
	int characters_printed = 0;
	char *format_specifier;
	int format_specifier_len;

	/* loop over the string */
	while (format[i])
	{
		c = format[i];
		/* if the character is a format spicifier */
		if (c == '%')
		{
			if (format[i + 1] == '%')
			{
				putchar(c);
				i += 2;
				characters_printed++;
				continue;
			}

			format_specifier = _get_specifier(format, i);
			format_specifier_len = _strlen(format_specifier);
			format_specifier_len += 0;
			/* get the coresponding value */
			/* call the _print_specifier function with format spicifier and coresponding value */

			/* i += format_specifier_len */
			/* characters_printed += _print_specifier(); */
			i++;
			characters_printed++;
		}
		/* if the character is normal */
		else
		{
			putchar(format[i]);
			i++;
			characters_printed++;
		}
	}

	return (1);
}
