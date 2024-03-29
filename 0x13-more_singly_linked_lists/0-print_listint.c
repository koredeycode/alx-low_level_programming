#include "lists.h"
/**
 * print_listint - print all the elemet of a listint_t list
 * @h: pointer to the first element of a listint_t lis
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
