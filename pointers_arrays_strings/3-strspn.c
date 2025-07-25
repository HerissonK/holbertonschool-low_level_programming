#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to verify
 * @accept: the characters to find in the sring
 *
 * Return: return the character if not in the leet array
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int byte = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				byte++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
