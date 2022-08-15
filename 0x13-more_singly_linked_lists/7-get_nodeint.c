#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list
 * @head: pointer of the listint_t list
 * @index: index of the list starting from zero
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ret;
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	ret = malloc(sizeof(listint_t));
	ret->n = tmp->n;
	ret->next = NULL;

	return (ret);
}
