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
	listint_t *current = *head;
	listint_t *new;
	unsigned int count = 0;

	if (current == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current != NULL && count < idx - 1)
	{
		count++;
		current = current->next;
		if (count < idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}

	}
	return (NULL);
}
