#include "lists.h"

/**
 * delete_nodeint_at_index - deletes not at index
 *
 * @index: index of node to be deleted
 * @head: pointer to head
 *
 * Return: 1 if succeeded -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *copy, *temp;

	if (!head || !*head)
		return (-1);
	copy = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		copy = copy->next;
		if (copy == NULL)
			return (-1);
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}
