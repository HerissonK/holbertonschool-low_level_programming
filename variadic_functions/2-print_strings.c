#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @n: numbers of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	if (n > 0)
	{
		va_start(string, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(string, int);
		}
	}
}
