#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: node to be added
 * @str: string
 *
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	int counter = 0;
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
