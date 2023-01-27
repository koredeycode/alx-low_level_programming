#include <math.h>
#include <stdio.h>

listint_t *helper(listint_t *list, size_t iteration)
{
	for (i = 0; i < iteration; i++)
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
	size_t a = 0;
	size_t sqt = 0;
	listint_t *iter = helper(list, b);

	while (iter->n < value && a < size)
	{
		printf("Value checked at index [%ld] = [%d]\n", a, iter->n);
		sqt = a;
		a = a + b;
		iter = helper(iter, b);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", sqt, a);
	iter = helper(list, sqt);
	while (iter->n < value && a < size)
	{
		printf("Value checked at index [%ld] = [%d]\n", sqt, iter->n);
		iter = helper(iter, 1);
		sqt += 1;
	}
	if (iter->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", sqt, iter->n);
		return (sqt);
	}
	printf("Value checked at index [%ld] = [%d]\n", sqt, iter->n);
	return (-1);
}
