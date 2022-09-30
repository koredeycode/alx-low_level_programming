#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new at a given position
 * @h: the head of list
 * @idx: index of the list where the new node should be added
 * @n: the data to be added
 * Return: the address of the new element or Null if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *hh;
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	hh = *h;
	if (hh)
		while (hh->prev != NULL)
			hh = hh->prev;
	if (hh == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
		hh = hh->next;
	if (!hh)
		return (NULL);
	hh->prev->next = new;
	new->prev = hh->prev;
	hh->prev = new;
	new->next = hh;
	return (new);
}
