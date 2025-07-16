#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printf_char(va_list args);
void printf_int(va_list args);
void printf_float(va_list args);
void printf_str(va_list args);

typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;

#endif
