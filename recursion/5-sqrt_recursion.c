#include "main.h"

/**
 * _sqrt_helper - found the square for a n
 *
 * @n: the number to square root
 * @i: the int to get the square root
 *
 * Return: the recursive or -1
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 *
 * @n: the square number
 *
 * Return: the square number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
