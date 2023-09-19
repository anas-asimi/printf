#include "main.h"

/**
 * _get_specifiers_number - returns length os string.
 * @string: string to evaluate.
 * Return: number of specifiers.
 */
int _get_specifiers_number(const char *string)
{
	int count = 0, i = 0;

	while (string[i])
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == '%')
				i++;
			else
				count++;
		}
		i++;
	}
	return (count);
}
