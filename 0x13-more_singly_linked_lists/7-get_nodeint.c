#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list
 * @head: pointer of the listint_t list
 * @index: index of the list starting from zero
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
