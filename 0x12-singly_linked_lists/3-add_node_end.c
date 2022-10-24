#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: new node
 * @str: data
 *
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	int counter = 0;
	list_t *new_node;
	list_t *temp_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		counter++;

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;

	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
