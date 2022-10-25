#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: singly linked list.
 *
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t nelem = 0;

	while (h != NULL)
	{
		nelem++;
		h = h->next;
	}
	return (nelem);
}
