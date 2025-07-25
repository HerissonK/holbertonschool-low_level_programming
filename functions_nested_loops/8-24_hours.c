#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: hours and minutes
  */
void jack_bauer(void)
{
	int h, m;

	h = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
