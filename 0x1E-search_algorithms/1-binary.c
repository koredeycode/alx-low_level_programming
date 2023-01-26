#include <stdio.h>
#include <math.h>

/**
 * printarray - print the array
 * @array: array to be printed
 * @start: the start index
 * @end: the end index
 */
void printarray(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
	}
}
/**
 * binary_search - searches for a value in a sorted array of int
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index of value or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	int m;

	if (array)
	{
		while (L <= R)
		{
			printarray(array, L, R);
			m = floor((L + R) / 2);
			if (array[m] < value)
				L = m + 1;
			else if (array[m] > value)
				R = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
