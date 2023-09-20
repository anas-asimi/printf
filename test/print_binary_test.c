#include <limits.h>
#include <stdio.h>
#include "../main.h"
#include "../_print_functions.c"
#include "../_putchar.c"

int main(void)
{
	int i;

	i = 0;
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(i++);
	_putchar('\n');
	print_binary(UINT_MAX * 2);
	_putchar('\n');
	print_string("11111111111111111111111111111110");

	return (0);
}
