#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: numero of argument in a array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	unsigned char *f = (unsigned char *) (long int) main;
	int n, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	if (n > 0)
		printf("%02x", *f++);
	for (i = 1; i < n; i++)
		printf(" %02x", *f++);
	if (n > 0)
		printf("\n");
	return (0);
}
