#include <stdio.h>
#include <ctype.h>
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
	int i, j;
	int somme = 0;

	if (argc == 1)
	{
		;
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
			printf("Error\n");
			}
		}

	somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
