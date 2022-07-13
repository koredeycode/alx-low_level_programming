#include <stdio.h>
/**
 * print_array - print array
 * @a: pointer, a character
 * @n: pointer, a character
 * Return: nothing
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < (n - 1))
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
