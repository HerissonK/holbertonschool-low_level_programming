#include "main.h"

/**
 * print_triangle - prints squares
 * @size: parameter
 * Return:returns nothing
 */

void print_triangle(int size)
{
	int lon, lar;

	if (size > 0)
	{
		for (lon = 1; lon <= size; lon++)
		{
			for ((lar = size - lon); lar > 0; lar--)
			{
				_putchar(' ');
			}
			for (lar = 0; lar < lon; lar++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
