#include "main.h"

/**
 * *_strcpy - function that return copies of the string.
 * @src: source.
 * Return: copy of the string.
 */

char *_strcpy(char *src)
{
	int len, i = 0;
	char *copy;

	len = _strlen(src);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = src[i];
	copy[len] = '\0';
	return (copy);
}
