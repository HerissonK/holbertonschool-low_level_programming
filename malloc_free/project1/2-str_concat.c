#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string to concanate
 * @s2: second string to concatane
 *
 * Return: the concatenation or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j;
	int str1, str2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";

	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (str1 = 0, str2 = 0; str1 < (i + j + 1); str1++)
	{
		if (str1 < i)
			a[str1] = s1[str1];
		else
			a[str1] = s2[str2++];
	}

	return (a);
}
