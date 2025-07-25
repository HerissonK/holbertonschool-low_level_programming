#include "main.h"

/**
 * factorial - factorial of a given number
 *
 * @n: the number to return his factorial
 *
 * Return: return the factorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}

	else
	{
		return (-1);
	}
}
