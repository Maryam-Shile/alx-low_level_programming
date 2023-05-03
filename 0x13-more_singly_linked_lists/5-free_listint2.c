#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees element of list
 * @head: pointer to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		new  = current->next;
		free(current);
		current = new;
	}
	*head = NULL;
}
