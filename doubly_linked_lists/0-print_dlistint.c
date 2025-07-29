#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - print all the element from a list "list_t"
 *
 * @h: current node
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
