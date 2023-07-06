#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses list
 * @head: node pointer
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head  = new;
	}
	*head = temp;
	return (temp);
}
