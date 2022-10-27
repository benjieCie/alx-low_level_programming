#include "lists.h"

/**
 * pop_listint - Deletes head node
 *
 * @head: pointer to head
 *
 * Return: COntents of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (i);
}
