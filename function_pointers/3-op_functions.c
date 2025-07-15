#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add 2 int
 *
 * @a: first number
 * @b: secund number
 *
 * Return: the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub 2 int
 * @a: first number
 * @b: secund number
 * Return: the the sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 int
 * @a: first number
 * @b: seconde number
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 int
 * @a: first number
 * @b: second number
 * Return: the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo 2 int
 * @a: first number
 * @b: second number
 * Return: the modulo
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
