#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: list to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
