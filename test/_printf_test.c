#include "../main.h"

int main(void)
{
	int len;
	int len2;
	/*
	unsigned int ui;
	void *addr;
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x0000637541f0;
	*/

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Percent :[%%]\n");
	len2 = printf("Percent :[%%]\n");
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("One percent:[%]\n");
	printf("printed characters are : [%d]\n\n", len);

	len = _printf("%\n");
	printf("printed characters are : [%d]\n\n", len);

	len = _printf("%!\n");
	printf("printed characters are : [%d]\n\n", len);

	len = _printf("%K\n");
	printf("printed characters are : [%d]\n\n", len);

	len = _printf("%c", '\0');
	printf("printed characters are : [%d]\n\n", len);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("String:[%s]\n", (char *)0);
	printf("printed characters are : [%d]\n\n", len);

	len = _printf("Multiple string: [%s] [%s]\n", "I am a string 1!", "I am a string 2!");
	len2 = printf("Multiple string: [%s] [%s]\n", "I am a string 1!", "I am a string 2!");
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Multiple types: [%s] [%c]\n", "I am a string 1!", 'Z');
	len2 = printf("Multiple types: [%s] [%c]\n", "I am a string 1!", 'Z');
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Numbers: [%d]\n", 999);
	len2 = printf("Numbers: [%d]\n", 999);
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Octals: [%o]\n", 999);
	len2 = printf("Octals: [%o]\n", 999);
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Octals: [%o]\n", UINT_MAX + 1024);
	len2 = printf("Octals: [%o]\n", UINT_MAX + 1024);
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Base 16 lower: [%x]\n", 999);
	len2 = printf("Base 16 lower: [%x]\n", 999);
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("Base 16 upper: [%X]\n", 999);
	len2 = printf("Base 16 upper: [%X]\n", 999);
	printf("printed characters are : [%d] - [%d]\n\n", len, len2);

	len = _printf("%S\n", "No special character.");
	printf("printed characters are : [%d]\n\n", len);
	len = _printf("%S\n", "\n");
	printf("printed characters are : [%d]\n\n", len);

	len = _printf("%R\n", "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz\n");
	printf("printed characters are : [%d]\n\n", len);

	return (0);
	/*
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	*/
}
