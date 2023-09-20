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
	print_binary(1024);
	_putchar('\n');
	print_binary(-1024);

	return (0);
}
/* 0								11111111111111111111110000000000 */
/* 11111111111111111111110000000000	11111111111111111111110000000000 */
