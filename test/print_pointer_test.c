#include <limits.h>
#include <stdio.h>
#include "../main.h"
#include "../_print_functions.c"
#include "../_print_functions2.c"
#include "../_putchar.c"

int main(void)
{
	void *addr;

	addr = (void *)0x0000637541f0;
	print_pointer(addr);
	_putchar('\n');

	return (0);
}
