#include <math.h>
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t pos;
	double d;

	if (!array || size == 0)
		return (-1);
	while (1)
	{
		d = (((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]));
		pos = lo + d;
		printf("Value checked array[%ld]", pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
		if (lo == hi)
			break;
	}
	return (-1);
}
