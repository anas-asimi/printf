#include "../main.h"

int main(void)
{
	void *addr;

	addr = (void *)0x0000637541f0;
	print_pointer(addr);
	_putchar('\n');

	return (0);
}
