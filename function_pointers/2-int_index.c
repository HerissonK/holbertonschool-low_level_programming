#include "function_pointers.h"

/**
 * int_index - function that prints a name
 *
 * @array: the element
 * @size: of the array
 * @cmp: the function that compares values
 *
 * Return: return -1 for no value or the values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
