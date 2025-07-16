#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * printf_char - print a char
 * @liste: list to print
 */

void printf_char(va_list liste)
{
	printf("%c", (char)va_arg(liste, int));
}

/**
 * printf_int - print an int
 * @liste: list to print
 */

void printf_int(va_list liste)
{
	printf("%d", va_arg(liste, int));
}

/**
 * printf_float - print a float
 * @liste: list to print
 */

void printf_float(va_list liste)
{
	printf("%f", (float)va_arg(liste, double));
}

/**
 * printf_str - print a string
 * @liste: print a list
 */

void printf_str(va_list liste)
{
	char *str = va_arg(liste, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - print various type of format
 * @format: string withe the type information
 */

void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list liste;
	funckey checker[4] = {
		{printf_char, 'c'},
		{printf_int, 'i'},
		{printf_float, 'f'},
		{printf_str, 's'}
	};
	int i = 0, j = 0;

	ptr = format;
	va_start(liste, format);
	while (format != NULL && *ptr)
	{
		if (checker[i].spec == *ptr)
		{
			if (j)
				printf(", ");
			j = 1;
			checker[i].f(liste);
			ptr++;
			i = -1;
		}
		i++;
		ptr += i / 4;
		i %= 4;
	}
	printf("\n");
	va_end(liste);
}
