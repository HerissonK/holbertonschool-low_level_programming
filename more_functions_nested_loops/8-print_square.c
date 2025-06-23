#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return:returns nothing
 */

void print_square(int size)
{
	int lon, lar;

	if (size > 0)
	{
		for (lon = 0; lon < size; lon++)
		{
			for (lar = 0; lar < (size - 1); lar++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
