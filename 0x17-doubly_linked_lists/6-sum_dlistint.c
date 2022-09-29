#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of adlistint_t linked list
 * @head: the head of list
 * Return: the sum of the data in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	if (!h)
		return (0);
	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
