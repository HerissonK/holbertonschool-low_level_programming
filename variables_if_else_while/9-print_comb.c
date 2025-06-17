#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{

	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
