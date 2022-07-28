#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: an array of integers
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int hold = min;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min); i++)
	{
		ptr[i] = hold++;
	}
	return (ptr);
}
