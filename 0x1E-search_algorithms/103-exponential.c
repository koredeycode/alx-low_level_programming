#include <math.h>
#include <stdio.h>
/**
 * min - my implementation of the min function
 * @A: first parameter
 * @B: second parameter
 * Return: the lesser value
 */
size_t min(size_t A, size_t B)
{
	if (A < B)
		return (A);
	else
		return (B);
}
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
 * binarySearch - searches for a value in a sorted array of int
 * @array: pointer to the first element of the array
 * @value: the value to search for
 * @L: lower index
 * @R: higher index
 * Return: the index of value or -1 if not found or array is null
 */
int binarySearch(int *array, int value, size_t L, size_t R)
{
	int m;

	printf("Value found between indexes [%ld] and [%ld]\n", L, R);
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
/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t i = 1;

	if (!array || size <= 0)
		return (-1);
	while (i < high)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[(int)i]);
			i = i * 2;
		}
		else
			break;
	}
	return (binarySearch(array, value, i / 2, min(i, high)));
}
