#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	putchar('\n');
	return (0);
}
