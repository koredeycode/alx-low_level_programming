#include <stdlib.h>
/**
 * array_iterator - execute a function given as a parameter on each
 * element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function to be performed on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
