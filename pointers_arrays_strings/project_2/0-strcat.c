#include "main.h"

/**
 * _strcat - copy the src after dest
 *
 * @dest: where to write
 * @src: where to get the string
 *
 * Return: returns lenght;
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (b = 0; dest[b] != '\0'; b++)
	;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a + b] = src[a];
	}
return (dest);
}
