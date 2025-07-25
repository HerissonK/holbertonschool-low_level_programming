#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search in
 * @accept: charcacter to search
 *
 * Return: return the character if not in the leet array
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s++);
		}
	s++;
	}
	return ('\0');
}
