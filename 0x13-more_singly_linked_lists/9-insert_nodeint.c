#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: node pointer
 * @idx: index
 * @n: new value
 * Return: return new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count;

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (count = 0; current != NULL && count < idx - 1; count++)
		current = current->next;
	if (count != idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
