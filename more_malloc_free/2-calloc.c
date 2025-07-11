#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of element to allocate
 * @size: size in octet of each element
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return ((void *)p);
}
