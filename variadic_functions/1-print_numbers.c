#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - that prints numbers, followed by a new line
 *
 * @separator: the type of separator between numbers
 * @n: the numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print;

	if (n > 0)
	{
		va_start(print, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(print, int));

			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(print);
	}
	printf("\n");
}
