#include "main.h"

/**
 * leet - returns the length of a string
 *
 * @s: the string to modify
 *
 * Return: return the character if not in the leet array
 */

char *leet(char *s)
{
	char *p = s;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = n[i] + '0';
		}
		s++;
	}
	return (p);
}
