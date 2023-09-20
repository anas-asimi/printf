#include <limits.h>
#include <stdio.h>
#include "../main.h"
#include "../_print_functions2.c"
#include "../_putchar.c"

int main(void)
{
	int i;

	i = 0;
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(i++);
	_putchar('\n');
	print_octal(-1024);

	return (0);
}
