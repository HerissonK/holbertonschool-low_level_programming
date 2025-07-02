#include <stdio.h>
#include <stdlib.h>

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
	int num1;
	int num2;
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
	}

	else
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	multi = num1 * num2;

	printf("%d\n", multi);
	}
	return (0);
}
