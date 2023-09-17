#include "main.h"
#include <stdio.h>

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
	/*
	char *format_specifier;
	int format_specifier_len;
	*/

	/* loop over the string */
	while (format[i])
	{
		c = format[i];
		/* if the character is normal */
		if (c != '%')
		{
			putchar(format[i]);
			i++;
			characters_printed++;
		}
		/* if the character is format spicifier */
		else
		{
			/* get copy of format spicifier  */
			/*
			format_specifier = _specifier_extracter(format, i);
			*/
			/* get lenght of format spicifier  */
			/* get the coresponding value */
			/* call the _print_specifier function with format spicifier and coresponding value */

			/* i += format_specifier_len */
			/* characters_printed += _print_specifier(); */
			i++;
			characters_printed++;
		}
	}

	return (1);
}
