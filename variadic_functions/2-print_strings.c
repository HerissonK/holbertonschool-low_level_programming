#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @n: numbers of string
 * @separator: use to separate the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list str;

	if (n > 0)
	{
		va_start(str, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(str, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(str);
	}
	printf("\n");
}
