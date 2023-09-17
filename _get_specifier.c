#include <stdlib.h>
#include "main.h"

/**
 * get_specifier - returns length os string.
 * @string: string to evaluate
 * @start: start index of specifier
 * Return: pointer to specifier or NULL if the start index not % or if cant alloc memory.
 */
char *_get_specifier(char *string, int start)
{
	int end, i;
	char c;
	char *specifier;

	if (string[start] != '%')
		return (NULL);

	i = 1;
	while (string[start + i])
	{
		c = string[start + i];
		if (c == '%' || c == 'c' || c == 'd' || c == 'e' || c == 'f' || c == 'g' || c == 'i' || c == 'o' || c == 's' || c == 'u' || c == 'x' || c == 'X')
			break;
		i++;
	}
	i++;
	end = start + i;

	specifier = malloc(sizeof(char) * (i + 1));
	if (specifier == NULL)
		return (NULL);

	for (i = 0; (i + start) < end; i++)
		specifier[i] = string[i + start];
	specifier[end - start] = '\0';

	printf("specifier is :	%s\n", specifier);

	return (specifier);
}
