#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
