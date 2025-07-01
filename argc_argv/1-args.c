#include <stdio.h>

/**
 * main - get the number of arguments
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
