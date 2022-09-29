#include "lists.h"
/**
 * get_dnodeint_at_index - get the value at a node from 0
 * @head: head of the node
 * @index: index
 * Return: the value at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	while (h->prev != NULL)
		h = h->prev;
	for (i = 0; i < index; i++)
	{
		h = h->next;
	}
	return (h);
}
