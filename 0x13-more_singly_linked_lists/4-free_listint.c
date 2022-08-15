#include "lists.h"
/**
 * free_listint - free listint_t list
 * @head: pointer to the listint_t list
 * Return: listint_t pointer
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}

}
