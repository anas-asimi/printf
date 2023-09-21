#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *string;

	string = "-";
	printf("flags of [%s]	is %d\n", string, _get_flags(string));

	string = "+";
	printf("flags of [%s]		is %d\n", string, _get_flags(string));

	string = "0";
	printf("flags of [%s]	is %d\n", string, _get_flags(string));

	string = "#";
	printf("flags of [%s]	is %d\n", string, _get_flags(string));

	string = " ";
	printf("flags of [%s]		is %d\n", string, _get_flags(string));

	string = "-+0# 5.2f";
	printf("flags of [%s]	is %d\n", string, _get_flags(string));

	return (0);
}
