#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * dlistint_len - print all the element from a list "list_t"
 *
 * @h: current node
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
