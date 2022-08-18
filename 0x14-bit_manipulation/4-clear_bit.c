#include "main.h"
/**
 * clear_bit - set the value of a bit at a given index to 1
 * @n: inputted number
 * @index: index of the number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 63)
	{
		return (-1);
	}
	tmp = 1 << index;
	if (*n & tmp)
		*n = *n ^ tmp;
	return (1);
}
