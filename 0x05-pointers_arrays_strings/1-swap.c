#include <stdio.h>
/**
 * swap_int - reset the values of the inputs
 * @a: pointer, an integer
 * @b: pointer, an integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
