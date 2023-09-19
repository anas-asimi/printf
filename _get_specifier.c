#include <stdlib.h>
#include "main.h"

/**
 * _get_specifier - returns length os string.
 * @string: string to evaluate
 * @start: start index of specifier
 * Return: pointer to specifier without the first %
 * or NULL if the start index not %
 * or if cant alloc memory.
 */
char *_get_specifier(const char *string, int start)
{
	int end, i = 1;
	char c;
	char *specifier;

	if (string[start] != '%')
		return (NULL);

	while (string[start + i])
	{
		c = string[start + i];
		if (c == '%' || c == 'c' || c == 'd' || c == 'e' || c == 'f')
			break;
		if (c == 'g' || c == 'i' || c == 'o' || c == 's')
			break;
		if (c == 'u' || c == 'x' || c == 'X' || c == 'p')
			break;
		i++;
	}
	end = start + i;

	specifier = malloc(sizeof(char) * i);
	if (specifier == NULL)
		return (NULL);

	for (i = 0; (i + start) < end; i++)
		specifier[i] = string[i + start + 1];
	specifier[end - start] = '\0';

	return (specifier);
}
