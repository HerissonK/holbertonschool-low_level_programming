#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 *
 * @min: the start of the range
 * @max: the end of the range
 *
 * Return: the array of intergrer or NULL for error
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}
	if (max - min == 0)
	{
		p = malloc(sizeof(int));
		p[0] = min;
	}
	else
	{
		p = malloc(sizeof(int) * (max - min + 1));
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; min <= max; i++, min++)
		{
			p[i] = min;
		}
	}
	return (p);
}
