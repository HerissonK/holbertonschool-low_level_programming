#include "main.h"

/**
 * *string_toupper - change lower in upper
 *
 * @s: the array with character
 *
 * Return: a caracter that is not lower or upper
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
