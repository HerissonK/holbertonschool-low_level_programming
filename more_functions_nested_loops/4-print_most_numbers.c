#include "main.h"

/**
  * print_most_numbers - Checks for lowercase character
  *
  * Return: 1 for lowercase character or 0 for anything else
  */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '('; c++)
{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
