#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * helper - helper function
 * @iter: a pointer to the list
 * Return: pointer to the skiplist
 */
skiplist_t *helper(skiplist_t *iter)
{
	if (iter->express)
		return (iter->express);
	while (iter->next)
		iter = iter->next;
	return (iter);
}
/**
 * linear_skip - search for an value in a list
 * @list: the list to be search
 * @value: the value to be searched
 * Return: the pointer to the value found or null
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *iter, *prev;

	if (list)
	{
		iter = list;
		prev = list;
		while (iter->n < value)
		{
			prev = iter;
			iter = helper(iter);
			if (iter->next)
				printf("Value checked at index [%ld] = [%d]\n", iter->index, iter->n);
			else
				break;
		}
		printf("Value found between indexes ");
		printf("[%ld] and [%ld]\n", prev->index, iter->index);
		while (prev)
		{
			printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
			if (prev->n == value)
				return (prev);
			prev = prev->next;
		}

	}
	return (NULL);
}
