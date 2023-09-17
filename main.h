#ifndef HEADER_FILE
#define HEADER_FILE

int _printf(const char *format, ...);
char *_specifier_extracter(const char *format, int start);
char *_get_specifier(const char *string, int start);
int _strlen(char *s);
char *_strcpy(char *src);

#endif
