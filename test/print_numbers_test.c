#include "../main.h"

int main(void)
{
	int x;
	unsigned int y;
	long int z;

	x = 10;
	print_number(x);
	_putchar('\n');
	print_number(INT_MIN);
	_putchar('\n');
	print_number(INT_MAX);
	_putchar('\n');
	_putchar('\n');

	y = -1024;
	print_unsigned_int(y);
	_putchar('\n');
	print_unsigned_int(INT_MIN);
	_putchar('\n');
	print_unsigned_int(INT_MAX);
	_putchar('\n');
	_putchar('\n');

	z = 10;
	print_number(z);

	return (0);
}
