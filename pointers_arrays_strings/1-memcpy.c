#include "main.h"

/**
 * _memcpy -  copies memory area
 *
 * @src: mermory source
 * @dest: memory destination
 * @n: numbers of bytes
 *
 * Return: return the character if not in the leet array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
