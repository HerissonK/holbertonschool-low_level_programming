#include "main.h"

/**
 * _strncat - copy the src after dest
 *
 * @dest: where to write
 * @src: where to get the string
 * @n: numbers to print
 *
 * Return: returns lenght;
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (b = 0; dest[b] != '\0'; b++)
	;
	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a + b] = src[a];
	}
return (dest);
}
