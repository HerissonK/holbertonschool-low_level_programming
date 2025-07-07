#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: the caracter to put in the array
 *
 * Return: return the array at the end or NULL if error or size 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(*a));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
