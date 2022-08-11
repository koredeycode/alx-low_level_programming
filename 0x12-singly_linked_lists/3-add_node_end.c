#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add new node at the end of a list_t list
 * @head: double pointer
 * @str: the string to be added
 * Return: a pointer to the a list_t list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ptr;
	}
	return (*head);
}
