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
	listint_t *temp;

	temp = *head;
	if (*head == NULL)
		return (0);
	if (!temp)
		return (0);
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}
