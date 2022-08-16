#include "lists.h"
/**
 * reverse_listint - reverses a listint
 * @head: pointer to the head of the listint
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt;
	listint_t *prv;

	prv = NULL;
	if (head == NULL)
	{
		return (NULL);
	}
	if (head != NULL)
	{
		while (*head != NULL)
		{
			nxt = (*head)->next;
			(*head)->next = prv;
			prv = *head;
			*head = nxt;
		}
	}
	(*head) = prv;
	return (*head);
}
