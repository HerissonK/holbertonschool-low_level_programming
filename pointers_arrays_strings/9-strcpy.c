#include "main.h"

/**
 * _strcpy - returns the length of a string
 *
 * @dest: where to write
 * @src: where to get the string
 *
 * Return: returns lenght;
 */

char *_strcpy(char *dest, char *src)
{
	int str;

	for (str = 0; *(src + str) != '\0'; str++)
	{
		*(dest + str) = *(src + str);
	}
	*(dest + str) = '\0';
	return (dest);
}
