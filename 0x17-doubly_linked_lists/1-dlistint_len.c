#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 *                of elements in this double linked list.
 * @h: head pointer
 * 
 * Return: number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
		return (nodes);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
