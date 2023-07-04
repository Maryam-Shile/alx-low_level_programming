#include "lists.h"

/**
 * free_list - frees list_t
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
