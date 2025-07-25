#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: the name to print
 * @f: the function to print
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
