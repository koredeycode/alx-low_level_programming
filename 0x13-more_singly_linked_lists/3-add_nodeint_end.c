#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of a lintint_t list
 * @head: pointer to the head pointer
 * @n: the new element to be added
 * Return: listint_t pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
	return (*head);
}
