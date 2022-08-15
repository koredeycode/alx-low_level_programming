#include "lists.h"
/**
 * free_listint2 - free listint_t list and set head to NULL
 * @head: pointer to head pointer of the listint_t list
 * Return: listint_t pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
