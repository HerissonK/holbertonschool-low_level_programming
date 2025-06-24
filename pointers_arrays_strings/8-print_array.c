
#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a string
 *
 * @n: number of cells
 * @a: pointer for the array
 *
 * On success: return the array
 */

void print_array(int *a, int n)
{
	int array;

	for(array = 0; array < n; array++)
	{
		if(array != n-1)
		{
			printf("%d, ", a[array]);
		}
		else
		{
			printf("%d", a[array]);
		}
	}
	printf("\n");
}
