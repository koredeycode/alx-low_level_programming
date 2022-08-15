#include "lists.h"
/**
 * add_nodeint - add a node at the beginnig of a lintint_t list
 * @head: pointer to the head pointer
 * @n: the new element to be added
 * Return: listint_t pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
