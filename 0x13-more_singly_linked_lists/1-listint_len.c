#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: linked list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
