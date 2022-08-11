#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * print_list - a function that print all the elements of a list_t list.
 * @h: a constant struct of type list_t
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
