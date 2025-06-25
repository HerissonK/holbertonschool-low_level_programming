#include "main.h"

/**
 * _reverse_array - returns the length of a string
 *
 * @*a: where to write
 * @n: where to get the string
 *
 * Return: returns lenght;
 */

void reverse_array(int *a, int n)
{
	int len;

	for (n = 0; a[n] != '\0'; n++)
	{
		_putchar(a[n]);
	}

	len = n;

	for (n = len - 1; n >= 0; n--)
	{
		_putchar(a[n]);
	}

	_putchar('\n');
}
