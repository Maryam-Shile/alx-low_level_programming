#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: node pointer
 * @index: index
 * Return: returns 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (current != NULL && index != 0)
		{
			prev = current;
			current = current->next;
			index--;
		}
		if (current == NULL)
			return (-1);
		prev->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
