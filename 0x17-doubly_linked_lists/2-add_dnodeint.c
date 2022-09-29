#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a dlist_int list
 * @h: the head of list
 * @n: the data to be added
 * Return: the address of the new element or Null if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;
	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
