#include "lists.h"

/**
 * print_dlistint - a function that prints all
 *                  elements of a doubly linked list.
 * @h: head of the list.
 * Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
		return (nodes);
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
