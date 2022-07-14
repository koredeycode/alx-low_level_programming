#include <stdio.h>
/**
 * reverse_array - print out the reverse of an array
 * @a: pointer, an integer
 * @n: an integer
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = tmp;
		}
	}
}
