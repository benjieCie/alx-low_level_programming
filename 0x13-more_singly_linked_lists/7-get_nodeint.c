#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 *
 * @index: index of node
 * @head: head of list
 *
 * Return: nth node or 0 if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}

		else
		{
			i++;
			head = head->next;
		}
	}
	return (head);
}
