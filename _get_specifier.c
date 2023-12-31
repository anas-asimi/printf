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

	while (string[start + i])
	{
		c = string[start + i];
		if (c == '-' || c == '+' || c == '0' || c == '#' || c == ' ' || c == 'l')
		{
			i++;
			continue;
		}
		if (c == 'c' || c == 'd' || c == 'e' || c == 'f' || c == 's' || c == 'S')
			break;
		if (c == 'g' || c == 'i' || c == 'o' || c == 'b' || c == '%' || c == 'R')
			break;
		if (c == 'u' || c == 'x' || c == 'X' || c == 'p' || c == '!' || c == 'K')
			break;
		return ("");
	}
	end = start + i;

	specifier = malloc(sizeof(char) * (i + 1));
	if (specifier == NULL)
		return (NULL);

	for (i = 0; (i + start) < end; i++)
		specifier[i] = string[i + start + 1];
	specifier[i] = '\0';

	return (specifier);
}
