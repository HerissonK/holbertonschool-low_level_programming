#include "main.h"

/**
 * _strcmp - returns the length of a string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the comparaison;
 */

int _strcmp(char *s1, char *s2)
{
	int str;

	for (str = 0; s1[str] != '\0' || s2[str] != '\0'; str++)
	{
		if (s1[str] != s2[str])
			return (s1[str] - s2[str]);
	}
}
