#include "lists.h"
/**
 * listint_len - return the number of the element of a listint_t list
 * @h: pointer to the first element of a listint_t lis
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
