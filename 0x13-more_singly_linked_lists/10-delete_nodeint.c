#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to the head of the listint_t list
 * @index: index where the node is to be removed
 * Return: address of the list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv, *nxt;
	unsigned int i;

	prv = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && prv != NULL; i++)
		{
			prv = prv->next;
		}
	}
	if (prv == NULL || (prv->next == NULL && index != 0))
	{
		return (-1);
	}
	nxt = prv->next;
	if (index != 0)
	{
		prv->next = nxt->next;
		free(nxt);
	}
	else
	{
		free(prv);
		*head = nxt;
	}
	return (1);
}
