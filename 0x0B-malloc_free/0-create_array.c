#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size ==  0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
