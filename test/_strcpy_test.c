#include <limits.h>
#include <stdio.h>
#include "../_strcpy.c"
#include "../_strlen.c"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *string;
	char *copy;

	string = "12345678 fnvfdjlbngdjklnbnldgkj";
	copy = _strcpy(string);
	printf("copy of \n%s \nis \n%s\n", string, copy);
	free(copy);
	return (0);
}
