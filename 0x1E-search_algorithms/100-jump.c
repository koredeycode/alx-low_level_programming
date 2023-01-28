#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = (size_t)sqrt(size);
	size_t sqt = 0;

	if (!array)
		return (-1);
	while (a < size && array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		sqt = a;
		a = a + b;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", sqt, a);
	while (sqt < size && array[sqt] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", sqt, array[sqt]);
		sqt += 1;
	}
	if (array[sqt] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", sqt, array[sqt]);
		return (sqt);
	}
	return (-1);
}
