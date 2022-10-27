#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 *
 * @idx: index where node should be added
 * @n: data
 * @head: pointer to head
 *
 * Return: address of new data or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;

	listint_t *new_node;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (counter == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}
			else
			{
				new_node->n = n;
				new_node->next = temp->next;
				temp->next = new_node;
				return (new_node);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		counter++;
	}
	return (NULL);
}
