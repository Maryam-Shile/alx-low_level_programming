#include <stdio.h>
#include "lists.h"

/**
 * list_len - length of list
 * @h: pointer to list h
 * Return: returns count
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

