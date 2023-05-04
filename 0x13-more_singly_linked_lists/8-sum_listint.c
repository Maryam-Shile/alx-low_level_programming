#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums n value in list
 * @head: pointer to first node
 * Return: returns sum of values
 */

int sum_listint(listint_t *head)
{
	int sum = 0, n;

	if (head == NULL || !head)
		return (0);
	while (head != NULL)
	{
		n = head->n;
		sum += n;
		head = head->next;
	}
	return (sum);
}

