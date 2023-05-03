#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - frees head node
 * @head: head node
 * Return: returns node value
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;
	listint_t *new;

	current = *head;
	if (*head == NULL)
		return (0);
	while (current != NULL)
	{
		n = current->n;
		new = current->next;
		free(current);
		current = new;
	}
	*head = NULL;
	return (n);
}
