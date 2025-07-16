#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the opp
 *
 * @argc: the array of opp
 * @argv: the place in the array
 *
 * Return: the result of Error if there is an error
 */

void printf_char(va_list liste)
{
	printf("%c", (char)va_arg(liste, int));
}
void printf_int(va_list liste)
{
	printf("%d", va_arg(liste, int));
}
void printf_float(va_list liste)
{
	printf("%f", (float)va_arg(liste, double));
}
void printf_str(va_list str)
{
	char *string = va_arg(str, char*);

	if (string == NULL)
	{
		printf("(nil)");
	}
	else
		printf("%s", string);
}
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
