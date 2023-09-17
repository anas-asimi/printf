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
	char *string;

	string = "12345678";
	printf("lenght of %s is %d\n", string, _strlen(string));
	return (0);
}
