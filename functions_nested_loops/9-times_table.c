#include "main.h"

/**
 * times_table - print the table of 9
 *
 * Return: 0
 **/

void times_table(void)
{
	int n, f;

	n = 0;

	while (n < 9)
	{
		f = 0;
		while (f < 9)
		{
			_putchar(n * f);
				f++;
		}
		_putchar('\n');
		n++;
	}
}
