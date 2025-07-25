#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: return the array at the end or NULL if error or size 0
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (--i; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
