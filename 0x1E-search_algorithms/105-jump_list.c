#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * helper - help in traversing the list
 * @list: the list to be traversed
 * @iteration: the count
 * Return: the pointer to the current node
 */
listint_t *helper(listint_t *list, size_t iteration)
{
	size_t i;

	for (i = 0; i < iteration; i++)
		if (list->next)
			list = list->next;
	return (list);
}
/**
 * jump_list - searches for a value in a sorted array using jump search
 * @list: the sorted linked list
 * @size: size of the linked list
 * @value: value to be searched for
 * Return: pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t b = (size_t)sqrt(size);
	size_t sqt = 0;
	listint_t *iter = list;

	if (!list)
		return (NULL);
	iter = helper(list, b);
	while (iter->index < size && iter->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", iter->index, iter->n);
		sqt = iter->index;
		iter = helper(iter, b);
		if (!iter->next)
			break;
	}
	printf("Value checked at index [%ld] = [%d]\n", iter->index, iter->n);
	printf("Value found between indexes [%ld] and [%ld]\n", sqt, iter->index);

	iter = helper(list, sqt);
	while (iter->index < size && iter->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", iter->index, iter->n);
		iter = helper(iter, 1);
		if (!iter->next)
			break;
	}
	if (iter->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", iter->index, iter->n);
		return (iter);
	}
	printf("Value checked at index [%ld] = [%d]\n", iter->index, iter->n);
	return (NULL);
}
