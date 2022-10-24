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
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
