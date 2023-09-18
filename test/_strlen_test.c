#include <limits.h>
#include <stdio.h>
#include "../_strlen.c"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *string1;
	char *string2;
	char *string3;

	string1 = "12345678";
	printf("lenght of %s is %d\n", string1, _strlen(string1));

	string2 = "%%";
	printf("lenght of %s is %d\n", string2, _strlen(string2));

	string3 = "%ld";
	printf("lenght of %s is %d\n", string3, _strlen(string3));
	return (0);
}
