#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
int print_number(int n);
int print_unsigned(unsigned n);
int print_binary(unsigned long int n);
int print_octal(int n);
int print_base16_lower(unsigned long int n);
int print_base16_upper(unsigned long int n);

#endif
