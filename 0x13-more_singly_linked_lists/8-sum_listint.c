#include "lists.h"
/**
 * sum_listint - return the sum of all the data (n) of a listint_t
 * @head: pointer of the listint_t list
 * Return: sum and 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ret;
	int sum = 0;

	ret = head;
	while (ret != NULL)
	{
		sum += ret->n;
		ret = ret->next;
	}
	return (sum);
}
