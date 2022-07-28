#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to be reallocated
 * @old_size: the old memory size
 * @new_size: the new memory size
 * Return: a void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	return (ptr);
}
