#include "lists.h"
/**
 * sum_listint - return the sum of all the data (n) of a listint_t
 * @head: pointer of the listint_t list
 * Return: sum and 0 if list is empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *pdx, *tmp;
	unsigned int i;

	pdx = malloc(sizeof(listint_t));
	if (pdx == NULL)
	{
		return (NULL);
	}
	ptr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
	}
	pdx->n = n;
	tmp = ptr->next;
	ptr->next = pdx;
	pdx->next = tmp;
	return (*head);
}
