#include "main.h"

/**
 *  helper_prime - returns 1 if the input integer is a prime number
 *
 * @n: the number divided by 2
 * @i: the incrementation
 * @limit: the limit to stop
 *
 * Return: 0
 */

int helper_prime(int n, int i, int limit)
{
	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
	{
		return (0);
	}

	else if (n % i != 0 && i <= limit)
	{
		return (helper_prime(n, i + 1, limit));
	}

	else
		return (1);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: the numbers to divide by 2
 *
 * Return: the number divided by 2
 */

int is_prime_number(int n)
{
	return (helper_prime(n, 2, n / 2));
}
