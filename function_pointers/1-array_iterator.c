#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 *
 * @array: place of the raay
 * @size: of the array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (; size-- > 0; array++)
		action(*array);
}
