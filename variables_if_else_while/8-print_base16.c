#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 15; num++)
		if (num < 10)
			putchar('0' + num);
		else
			putchar('a' + (num - 10));
	return (0);
}
