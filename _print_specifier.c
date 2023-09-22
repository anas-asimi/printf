#include "main.h"

/**
 * _print_specifier - print a specifier.
 * @specifier: specifier
 * @list: list
 * Return: number of caracters printed.
 */
int _print_specifier(char *specifier, va_list *list)
{
	int len;
	char type;

	len = _strlen(specifier);
	type = specifier[len - 1];

	if (type == 'c')
		return (print_character(va_arg(*list, int)));
	if (type == '%')
		return (print_character('%'));

	if (type == 'K')
		return (print_string("%K"));
	if (type == '!')
		return (print_string("%!"));
	if (type == 's')
		return (print_string(va_arg(*list, char *)));
	if (type == 'S')
		return (print_non_printable(va_arg(*list, char *)));
	if (type == 'R')
		return (print_rot13string(va_arg(*list, char *)));

	if (type == 'd' || type == 'i')
		return (print_number(va_arg(*list, int)));
	if (type == 'u')
		return (print_unsigned_int(va_arg(*list, unsigned int)));

	if (type == 'b')
		return (print_binary(va_arg(*list, uint32_t)));
	if (type == 'o')
		return (print_octal(va_arg(*list, int64_t)));
	if (type == 'x')
		return (print_base16_lower(va_arg(*list, int64_t)));
	if (type == 'X')
		return (print_base16_upper(va_arg(*list, int64_t)));
	if (type == 'p')
		return (print_pointer(va_arg(*list, void *)));
	return (1);
}
