#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the longer of the line
 *
 * Return: return a new line
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
