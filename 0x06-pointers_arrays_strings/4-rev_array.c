#include <stdio.h>
/**
 * reverse_array - print out the reverse of an array
 * @a: pointer, an integer
 * @n: an integer
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	n -= 1;
	while (n >= 0)
	{
		printf("%d", a[n]);
		if (n != 0)
		{
			printf(", ");
		}
		n--;
	}
	printf("\n");
}
