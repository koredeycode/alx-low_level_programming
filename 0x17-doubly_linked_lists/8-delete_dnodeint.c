#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @head: the head of list
 * @index: index of the list where the new node should be deleted
 * Return: the 1 if it suceeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hh;

	hh = *h;
	if (hh == NULL)
	{
		return (-1);
	}
	if (hh)
		while (hh->prev != NULL)
			hh = hh->prev;
	for (i = 0; i < idx && hh; i++)
		hh = hh->next;
	if (!hh)
		return (NULL);
	return (-1);
}
