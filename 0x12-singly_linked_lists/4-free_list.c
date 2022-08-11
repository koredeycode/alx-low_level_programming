#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		free(current->str);
		free(current);
		head = head->next;
		current = head;
	}
}
