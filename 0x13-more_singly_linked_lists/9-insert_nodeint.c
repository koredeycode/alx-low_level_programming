#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the head of the listint_t list
 * @idx: index where the data is to be added
 * @n: the data (int) to be added
 * Return: address of the list
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
