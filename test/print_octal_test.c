#include "../main.h"

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
	print_octal((int64_t)UINT_MAX + 1024);

	return (0);
}
