#include "main.h"

/**
  * more_numbers - Make alphabet x10 times
  *
  * Return: void
  */

void more_numbers(void)
{
	int d, u;

	for (d = 0; d < 10; d++)
	{
		for (u = 0; u <= 14; u++)
		{
			if (u > 9)
			{
				_putchar((u / 10) + '0');
			}
			_putchar((u % 10) + '0');
		}
		_putchar(10);
	}
}
