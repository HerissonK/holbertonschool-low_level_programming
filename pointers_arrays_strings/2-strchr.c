#include "main.h"

/**
 * _strchr -  copies memory area
 *
 * @s: string to use
 * @c: charcacter to verify
 *
 * Return: return the character if not in the leet array
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
