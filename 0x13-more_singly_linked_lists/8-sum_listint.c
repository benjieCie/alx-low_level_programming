#include "lists.h"

/**
 * sum_listint - Function that sums all the data
 *
 * @head: list head
 *
 * Return: Sum total
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}

	return (total);
}
