#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a dlist_int list
 * @h: the head of list
 * @n: the data to be added
 * Return: the address of the new element or Null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
	}
	new->prev = h;
	h->next = new;
	return (new);
}
