#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *string;
	char *specifier1;
	char *specifier2;

	string = "hi %+- 55ld from test %%";
	specifier1 = _get_specifier(string, 3);
	specifier2 = _get_specifier(string, 22);

	if (specifier1 == NULL)
		printf("specifier 1 is null\n");
	if (specifier2 == NULL)
		printf("specifier 2 is null\n");
	printf("specifiers of [%s] is : [%s] and [%s]\n", string, specifier1, specifier2);

	return (0);
}
