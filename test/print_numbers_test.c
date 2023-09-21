#include "../main.h"

int main(void)
{
	int x;
	unsigned int y;
	long int z;

	x = 10;
	print_number(x);
	_putchar('\n');

	y = -1024;
	print_unsigned_int(y);
	_putchar('\n');

	z = 10;
	print_number(z);
	_putchar('\n');

	return (0);
}
