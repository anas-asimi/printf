#include <limits.h>
#include <stdio.h>
#include "../_get_specifier.c"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *string;
	char *specifier;
	int start = 3;

	string = "hi %+- 55ld alloha";
	specifier = _get_specifier(string, start);

	if (specifier == NULL)
		printf("specifier is null\n");
	else
		printf("specifier of [%s] is [%s]\n", string, specifier);

	return (0);
}
