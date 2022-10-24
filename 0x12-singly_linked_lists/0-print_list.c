#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: Single linked list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s", h->len, h->str);
		h = h->next;
	}

	return (i);
}
