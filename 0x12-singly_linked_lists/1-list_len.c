#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: a constant struct of type list_t
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
