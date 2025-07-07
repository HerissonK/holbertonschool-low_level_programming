#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocate memory
 *
 * @b: amount of memory needed
 *
 * Return: the allocated memory or NULL if error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j, len1, len2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
	{
		;
	}

	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
	{
		;
	}

	if (n >= len2)
	{
		n = len2;
	}

	str = malloc(size(char) * (len! + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; i++, j++)
	{
		str[i] = s2[j];
	}
	str[i] + '\0';
	return (str);
}
