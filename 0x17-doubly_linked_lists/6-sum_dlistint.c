#include "lists.h"

/**
 * sum_dlistint - sums the data in list
 * @head: head pointer
 * Return: returns sum
 */

int sum_dlistint(dlistint_t *head)
{
	int x, i = 0, sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i++;
		x = head->n;
		sum += x;
		head = head->next;
	}
	return (sum);
}
