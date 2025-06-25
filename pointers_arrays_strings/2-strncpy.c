#include "main.h"

/**
 * _strncpy - returns the length of a string
 *
 * @dest: where to write
 * @src: where to get the string
 * @n: number of character to copy
 *
 * Return: the copy;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str;

	for (str = 0; src[str] != '\0' && str < n; str++)
	{
		dest[str] = src[str];
	}
	while (str < n)
		dest[str++] = '\0';
	return (dest);
}
