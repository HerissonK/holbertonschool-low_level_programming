#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the string given  as a parameter
 *
 * Return: return duplicated  or NULL if error or size 0
 */

char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
	{
		a[c] = str[c];
	}
	a[c] = '\0';

	return (a);
}
