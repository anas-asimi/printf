#include <stdarg.h>
#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Number of printed chars.
 */
int _printf(const char *format, ...)
{
	int progress = 0;
	int characters_printed = 0;
	char *format_specifier;
	int format_specifier_len;
	va_list list;

	/* initialise the args */
	va_start(list, format);
	if (format == NULL)
		return (-1);
	/* loop over the string */
	while (format[progress])
	{
		/* if the character is a format spicifier */
		if (format[progress] == '%')
		{
			format_specifier = _get_specifier(format, progress);
			format_specifier_len = _strlen(format_specifier);
			/*if specifier empty '' in case one percent '%'*/
			if (format_specifier_len == 0)
			{
				progress++;
				continue;
			}
			/* increase progresse to skip the whole format specifier */
			progress += format_specifier_len + 1;
			/* increase the printed characters counter */
			characters_printed += _print_specifier(format_specifier, &list);
			free(format_specifier);
			continue;
		}
		/* if the character is normal */
		_putchar(format[progress]);
		progress++;
		characters_printed++;
	}
	va_end(list);
	return (characters_printed);
}
