#include "lists.h"
/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: pointer to head pointer of the listint_t list
 * Return: the head node's data and zero if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr, *pntr;
	int i;

	if (*head == NULL)
		return (0);
	ptr = *head;
	i = ptr->n;
	pntr = ptr->next;
	free(ptr);
	*head = pntr;
	return (i);
}
