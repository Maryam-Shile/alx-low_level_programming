#include "lists.h"

/**
 * add_node_end - adds node to the end
 * @head: poiter to first node
 * @str: value of new node
 * Return: returns new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
