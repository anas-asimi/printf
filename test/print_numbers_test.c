#include <limits.h>
#include <stdio.h>
#include "../main.h"
#include "../_print_functions.c"
#include "../_putchar.c"

int main(void)
{
	int x;
	unsigned int y;
	long int z;

	x = 10;
	print_number(x);
	_putchar('\n');

	y = 10;
	print_number(y);
	_putchar('\n');

	z = 10;
	print_number(z);
	_putchar('\n');

	return (0);
}
