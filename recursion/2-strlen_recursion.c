#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string to get the lenght
 *
 * Return: return the lenght of the string or 0 with no string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
