#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/*
#include "_get_specifier.c"
#include "_strlen.c"
#include "_print_specifier.c"
*/

/**
 * _printf - Printf function
 * @format: format.
 * Return: Number of printed chars.
 */
int _printf(const char *format, ...)
{
	int progress = 0;
	char c;
	int characters_printed = 0;
	char *format_specifier;
	int format_specifier_len;

	/* loop over the string */
	while (format[progress])
	{
		c = format[progress];
		/* if the character is a format spicifier */
		if (c == '%')
		{
			if (format[progress + 1] == '%')
			{
				_putchar('%');
				progress += 2;
				characters_printed++;
				continue;
			}
			format_specifier = _get_specifier(format, progress);
			format_specifier_len = _strlen(format_specifier);
			/* increase progresse to skip the whole format specifier */
			progress += format_specifier_len + 1;
			/* increase the printed characters counter */
			characters_printed += _print_specifier(format_specifier, 1);
			continue;
		}
		/* if the character is normal */
		_putchar(format[progress]);
		progress++;
		characters_printed++;
	}

	return (1);
}
