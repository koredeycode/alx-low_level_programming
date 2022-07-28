#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memory
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
