#include <stdio.h>

/**
 * main - get the name of the program
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
