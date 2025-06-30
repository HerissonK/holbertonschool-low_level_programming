#include "main.h"

/**
 * _strstr -  locates a substring
 *
 * @needle: substring to found
 * @haystack: string where to found neddle
 *
 * Return: return the character if not in the leet array
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
