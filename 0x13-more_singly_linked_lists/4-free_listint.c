#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees element of list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current  = head->next;
		free(head);
		head = current;
	}
}
