#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

	int _putchar(char c);
int _printf(const char *format, ...);
char *_get_specifier(const char *string, int start);
int _get_specifiers_number(const char *string);
int _print_specifier(char *specifier, va_list *list);
int _strlen(char *s);
char *_strcpy(char *src);
int _get_flags(char *specifier);
int print_character(char c);
int print_string(char *s);
int print_non_printable(char *s);
int print_number(long int n);
int print_unsigned_int(unsigned int n);
int print_binary(int64_t n);
int print_octal(int64_t n);
int print_base16_lower(int64_t n);
int print_base16_upper(int64_t n);
int print_pointer(void *n);
int print_rot13string(char *s);

#endif
