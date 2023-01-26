#include <stdio.h>


/**
 * linear_search - searches for a value in an array of integers linearly
 * @array: the arra to be searched
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
