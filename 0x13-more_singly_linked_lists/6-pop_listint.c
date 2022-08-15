#include "lists.h"
/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: pointer to head pointer of the listint_t list
 * Return: the head node's data and zero if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i = (*head)->n;

	if (head != NULL)
	{
		ptr = (*head)->next;
		free((*head));
		*head = ptr;
		return (i);
	}
	return (0);
}
