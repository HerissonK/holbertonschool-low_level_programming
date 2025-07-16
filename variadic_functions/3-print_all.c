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
	char *string = va_arg(liste, char*);

	if (string == NULL)
	{
		printf("(nil)");
	}
	else
		printf("%s", string);
}

/**
 * print_all - print various type of format
 * @format: string withe the type information
 */

void print_all(const char * const format, ...)
{
	funckey checker[4] = {
		{printf_char, 'c'},
		{printf_int, 'i'},
		{printf_float, 'f'},
		{printf_str, 's'}
	};

	va_list liste;
	unsigned int i = 0, j;
	char *separator = "";

	va_start(liste, format);

	while (format && format[i])
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == checker[j].spec)
			{
				printf("%s", separator);
				checker[j].f(liste);
				separator = ", ";
				break;
			}
		}
		i++;
	}
	va_end(liste);
	printf("\n");
}
