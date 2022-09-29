#include "lists.h"
/**
 * free_dlistint - free a dlistint_int from memory
 * @head: address of the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
		while (head->prev != NULL)
			head = head->prev;
	tmp = head;
	while (tmp)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
