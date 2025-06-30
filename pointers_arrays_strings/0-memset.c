#include "main.h"

/**
 * _memset - full a empty memory zone
 *
 * @s: the pointer
 * @b: the octet to copy
 * @n: numbers of octet
 *
 * Return: return the character if not in the leet array
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
