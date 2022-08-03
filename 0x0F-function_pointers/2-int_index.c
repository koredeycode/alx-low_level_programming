/**
 * int_index - searches for an integer
 * @array: inputted array
 * @size: number of element in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of first element || -1 no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
