#include "lists.h"
/**
 * dlistint_len - returns the number of elements of a dlistint_t list
 * @h: the head of list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
