#include "main.h"

/**
 * _strlen - returns length os string.
 * @s: string to evaluate
 * Return: int.
 */
int _strlen(char *s)
{
	int length = 0;

	if (s[length])
	{
		while (s[length])
			length++;
	}
	return (length);
}
