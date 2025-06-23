#include "main.h"
/**
 * swap_int - swap value between a and b
 * @a: first parameter swaped
 * @b: second parameter swaped
 * Return : nothing
 */

void swap_int(int *a, int *b)
{
	int *tmp = a;
	*a = *b;
	*b = *tmp;
}
