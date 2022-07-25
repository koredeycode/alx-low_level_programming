#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and initializes it
 * with a specific char
 * @size: size of the array
 * @c: the character to initialize with
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));
	if (arr ==  NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
